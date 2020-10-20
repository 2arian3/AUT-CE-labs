----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:07:09 09/11/2020 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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


entity RAM is
	port
	(
		Data_in : in std_logic_vector(7 downto 0);
		Addr : in std_logic_vector(3 downto 0);
		w : in std_logic ;
		r : in std_logic;
		clk : in std_logic;
		rst : in std_logic;
		Data_out : out std_logic_vector(7 downto 0)
	);
	
end entity;

architecture Behavioral of RAM is

	subtype word is std_logic_vector(7 downto 0);
	type memory is array(15 downto 0) of word;	
	signal ram : memory;
	signal addr_tmp : std_logic_vector(3 downto 0);
	
begin

	process(clk,rst)
	begin
	
		if ( rst = '0' ) then
				for i in 0 to 15 loop
					ram(i) <= std_logic_vector(to_unsigned(i, 8));
				end loop;
			
		elsif(rising_edge(clk)) then
			if( w = '1' and r = '0' ) then
				ram(conv_integer(Addr)) <= Data_in;
			end if;
			
			if ( w = '0' and r = '1' ) then
				Data_out <= ram(conv_integer(Addr));
			end if;
			
		end if;
	
	end process;
		
end Behavioral;

