----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:07:56 08/22/2020 
-- Design Name: 
-- Module Name:    four_bit_multiplexer4to1 - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity four_bit_multiplexer4to1 is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           C : in  STD_LOGIC_VECTOR (3 downto 0);
           D : in  STD_LOGIC_VECTOR (3 downto 0);
           S : in  STD_LOGIC_VECTOR (1 downto 0);
			  enable : in STD_LOGIC;
           output : out  STD_LOGIC_VECTOR (3 downto 0));
end four_bit_multiplexer4to1;

architecture structure of four_bit_multiplexer4to1 is

	component multiplexer4to1 is
		Port ( A : in  STD_LOGIC;
				 B : in  STD_LOGIC;
				 C : in  STD_LOGIC;
				 D : in  STD_LOGIC;
				 S : in  STD_LOGIC_VECTOR (1 downto 0);
				 e : in STD_LOGIC;
				 output : out  STD_LOGIC);
	end component multiplexer4to1;

begin
	first_bit_multiplexer : multiplexer4to1 port map ( A => A(0), B => B(0), C => C(0), D => D(0), S => S, e => enable, output => output(0));
	second_bit_multiplexer : multiplexer4to1 port map( A => A(1), B => B(1), C => C(1), D => D(1), S => S, e => enable, output => output(1));
	third_bit_multiplexer : multiplexer4to1 port map( A => A(2), B => B(2), C => C(2), D => D(2), S => S, e => enable, output => output(2));
	fourth_bit_multiplexer : multiplexer4to1 port map( A => A(3), B => B(3), C => C(3), D => D(3), S => S, e => enable, output => output(3));
end structure;

