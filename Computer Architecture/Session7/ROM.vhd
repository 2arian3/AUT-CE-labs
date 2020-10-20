----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:52:01 09/11/2020 
-- Design Name: 
-- Module Name:    ROM - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ROM is
    Port ( Addr : in  STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
           Data_out : out  STD_LOGIC_VECTOR (7 downto 0));
end ROM;

architecture Behavioral of ROM is

	type memory is array(15 downto 0) of std_logic_vector(7 downto 0);
	signal mem_tmp : memory;

begin
	
	mem_tmp(0) <= "00000000";
	mem_tmp(1) <= "00000001";
	mem_tmp(2) <= "00000010";
	mem_tmp(3) <= "00000011";
	mem_tmp(4) <= "00000100";
	mem_tmp(5) <= "00000101";
	mem_tmp(6) <= "00000110";
	mem_tmp(7) <= "00000111";
	mem_tmp(8) <= "00001000";
	mem_tmp(9) <= "00001001";
	mem_tmp(10) <= "00001010";
	mem_tmp(11) <= "00001011";
	mem_tmp(12) <= "00001100";
	mem_tmp(13) <= "00001101";
	mem_tmp(14) <= "00001110";
	mem_tmp(15) <= "00001111";
	
	process(clk)
	begin
		if (rising_edge(clk))then
			Data_out <= mem_tmp(conv_integer(Addr));
		end if;
	end process;
	
end Behavioral;

