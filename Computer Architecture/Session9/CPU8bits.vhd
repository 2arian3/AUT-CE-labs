----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:12:35 09/18/2020 
-- Design Name: 
-- Module Name:    CPU8bits - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CPU8bits is
	 generic( Width : integer := 8;
				 C : integer := 5);
    Port ( Data_in : in  STD_LOGIC_VECTOR (Width-1 downto 0);
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  Data_out : out STD_LOGIC_VECTOR (Width-1 downto 0);
           address : out  STD_LOGIC_VECTOR (C-1 downto 0);
           we : out  STD_LOGIC;
           oe : out  STD_LOGIC);
end CPU8bits;

architecture CPU_ARCH of CPU8bits is
	
	signal akku : std_logic_vector(8 downto 0);
	signal adreg : std_logic_vector(4 downto 0);
	signal pc : std_logic_vector(4 downto 0);
	signal states : std_logic_vector(3 downto 0);

begin
	process(clk, rst)
	begin
		if( rst = '0' ) then
			adreg <= (others => '0');
			states <= (others => '0');
			akku <= (others => '0');
			pc <= (others => '0');
		
		elsif( rising_edge(clk) ) then
			-- PC / Address pass
			if( states = "0000" ) then
				pc <= adreg + 1;
				adreg <= Data_in(4 downto 0);
			else
				adreg <= pc;
			end if;
			-- ALU / Data path
			case states is
					when "1000" =>
						adreg <= pc;
						akku(7 downto 0) <= Data_in;
						akku(8) <= '0';
					when "1001" => adreg <= pc;
					when "1010" => adreg <= pc;
					when "1011" =>
						akku(8) <= '0';
						adreg <= pc;
					when "0100" =>
						adreg <= pc;
						akku(7 downto 0) <=  akku(7 downto 0) and Data_in;
					when "0101" =>
						adreg <= pc;
						akku <= ('0' & akku(7 downto 0)) + ('0' & Data_in);
					when "0110" => akku(7 downto 0) <= not akku(7 downto 0);
					when "0111" => akku <= akku(7 downto 0) & '0';
					when others => null;
			end case;
			-- State machine
			if (states /= "0000" or (states = "0000" and Data_in(7 downto 5) = "011" and akku(8) = '0')) then states <= "0000";
			elsif (Data_in(7 downto 5) = "000") then states <= "1000";
			elsif (Data_in(7 downto 5) = "001") then states <= "1001";
			elsif (Data_in(7 downto 5) = "010") then states <= "1010";
			elsif (Data_in(7 downto 5) = "011" and akku(8) = '1') then states <= "1011";
			elsif (Data_in(7 downto 5) = "100") then states <= "0100";
			elsif (Data_in(7 downto 5) = "101") then states <= "0101";
			elsif (Data_in(7 downto 5) = "110") then states <= "0110";
			elsif (Data_in(7 downto 5) = "111") then states <= "0111";
			end if;
		
		end if;
	end process;

-- Outputs
address <= adreg;
Data_out <= (others => 'Z') when states /= "1001" else akku(7 downto 0);
oe <= '0' when (clk = '1' or rst = '0' or (states = "1001" or states = "1011" or states = "0110" or states = "0111")) 
			 else '1'; 
we <= '0' when (clk = '1' or rst = '0' or states /= "1001") 
          else '1'; 
end CPU_ARCH;




--when "0000" => 
--	pc <= adreg + 1;
--	adreg <= Data_in(4 downto 0);