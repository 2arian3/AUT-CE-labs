----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:58:15 09/18/2020 
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
	generic(
		Width : integer := 8;
		C : integer := 5
	);
	port
	(
		Data_in : in std_logic_vector(Width-1 downto 0);
		Addr : in std_logic_vector(C-1 downto 0);
		w : in std_logic ;
		r : in std_logic;
		clk : in std_logic;
		rst : in std_logic;
		Data_out : out std_logic_vector(Width-1 downto 0)
	);
	
end entity;

architecture Behavioral of RAM is

	subtype word is std_logic_vector(Width-1 downto 0);
	type memory is array(2**C-1 downto 0) of word;	
	signal ram : memory;
	
begin

	process(clk,rst)
	begin
	
		if ( rst = '0' ) then
				--for i in 0 to 2**C-1 loop
					--ram(i) <= std_logic_vector(to_unsigned(i, 8));
				--end loop;
				RAM (0) <= "00000001";
		RAM (1) <= "11000101";
		RAM (2) <= "00110111";
		RAM (3) <= "10111100";
		RAM (4) <= "11100011";
		RAM (5) <= "10001111";
		RAM (6) <= "00110000";
		RAM (7) <= "01001010";
		RAM (8) <= "00111011";
		RAM (9) <= "11000011";
		RAM (10) <= "10011100";
		RAM (11) <= "01101101";
		RAM (12) <= "01111110";
		RAM (13) <= "00011111";
		RAM (14) <= "11100000";
		RAM (15) <= "00000000";
		RAM (16) <= "00110011";
		RAM (17) <= "11101111";
		RAM (18) <= "00111100";
		RAM (19) <= "00110011";
		RAM (20) <= "01100111";
		RAM (21) <= "00111001";
		RAM (22) <= "01011100";
		RAM (23) <= "10010010";
		RAM (24) <= "00011010";
		RAM (25) <= "11100101";
		RAM (26) <= "10101000";
		RAM (27) <= "01001100";
		RAM (28) <= "01110011";
		RAM (29) <= "11110001";
		RAM (30) <= "11000011";
		RAM (31) <= "01111000";
		Data_out <= "00000000";
			
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
