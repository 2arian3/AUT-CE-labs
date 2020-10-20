----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:21:00 09/11/2020 
-- Design Name: 
-- Module Name:    RAM_dual_port - Behavioral 
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
USE IEEE.std_logic_unsigned.ALL;
use IEEE.Numeric_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RAM_dual_port is
    Port ( input_A : in  STD_LOGIC_VECTOR (7 downto 0);
           Addr_A : in  STD_LOGIC_VECTOR (3 downto 0);
           w_a : in  STD_LOGIC;
           r_a : in  STD_LOGIC;
           input_B : in  STD_LOGIC_VECTOR (7 downto 0);
           Addr_B : in  STD_LOGIC_VECTOR (3 downto 0);
           w_b : in  STD_LOGIC;
           r_b : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           output_A : out  STD_LOGIC_VECTOR (7 downto 0);
           output_B : out  STD_LOGIC_VECTOR (7 downto 0));
end RAM_dual_port;

architecture Arch of RAM_dual_port is
	
	subtype word is std_logic_vector(7 downto 0);
	type memory is array(15 downto 0) of word;	
	signal ram : memory;

begin
	process(clk, rst)
		begin
			if(rst = '0') then
				for i in 0 to 15 loop
					ram(i) <= std_logic_vector(to_unsigned(i, 8));
				end loop;
			
			elsif(rising_edge(clk)) then
				if(w_a = '0' and r_a = '1') then
					output_A <= ram(conv_integer(Addr_A));
					if(w_b = '1' and r_b = '0') then
						ram(conv_integer(Addr_B)) <= input_B;
					elsif(w_b = '0' and r_b = '1') then
						output_B <= ram(conv_integer(Addr_B));
					end if;
				elsif(w_a = '1' and r_a = '0') then
					ram(conv_integer(Addr_A)) <= input_A;
					if(w_b = '1' and r_b = '0') then
						ram(conv_integer(Addr_B)) <= input_B;
					elsif(w_b = '0' and r_b = '1') then
						output_B <= ram(conv_integer(Addr_B));
					end if;
				end if;
			end if;
		end process;


end Arch;

