----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:47:03 09/11/2020 
-- Design Name: 
-- Module Name:    CAM - Behavioral 
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
use IEEE.Numeric_STD.ALL;
use ieee.math_real.uniform;
use ieee.math_real.floor;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity CAM is
    Port ( Data_in : in  STD_LOGIC_VECTOR (7 downto 0);
           w : in  STD_LOGIC;
           r : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           addr_out : out  STD_LOGIC_VECTOR (3 downto 0);
           hit_out : out  STD_LOGIC);
end CAM;

architecture rtl of CAM is
	shared variable x : real;
	shared variable seed1, seed2 : integer := 999;
	subtype word is std_logic_vector(7 downto 0);
	type memory is array(15 downto 0) of word;	
	signal cam : memory;
	signal found : STD_LOGIC;
begin
	
	process(clk, rst)
		begin
			if(rising_edge(clk)) then
			hit_out <= '0';
				if(w = '1' and r = '0') then
					found <= '0';
					for i in 0 to 15 loop
						if(cam(i) = Data_in) then
							found <= '1';
							addr_out <= std_logic_vector(to_unsigned(i, 4));
							hit_out <= '1';
						end if;
					end loop;
					if(found = '0') then 
						for i in 0 to 15 loop 
							if(cam(i) = "UUUUUUUU" and found = '0') then
								found <= '1';
								cam(i) <= Data_in;
							end if;
						end loop;
						if(found = '0') then
						   uniform(seed1, seed2, x);
							cam(integer(floor(x * 16.0))) <= Data_in;
						end if;
					end if;
				elsif(w = '0' and r = '1') then
					hit_out <= '0';
					for i in 0 to 15 loop
						if(cam(i) = Data_in) then
							hit_out <= '1';
							addr_out <= std_logic_vector(to_unsigned(i, 4));
						end if;
					end loop;
				end if;
			elsif(rst = '0') then
				for i in 0 to 15 loop
					cam(i) <= "UUUUUUUU";
				end loop;
			end if;
		end process;
end rtl;

