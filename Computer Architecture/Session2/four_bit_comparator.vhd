----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:58:14 08/22/2020 
-- Design Name: 
-- Module Name:    four_bit_comparator - Behavioral 
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

entity four_bit_comparator is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           A_GT_B : out  STD_LOGIC;
           A_EQ_B : out  STD_LOGIC;
           A_LT_B : out  STD_LOGIC);
end four_bit_comparator;

architecture Structure of four_bit_comparator is
	component improved_two_bit_comparator is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Lt : in  STD_LOGIC;
           Eq : in  STD_LOGIC;
           Gt : in  STD_LOGIC;
           A_GT_B : out  STD_LOGIC;
           A_EQ_B : out  STD_LOGIC;
           A_LT_B : out  STD_LOGIC);
	end component improved_two_bit_comparator;
	
	signal tmp0, tmp1, tmp2 : STD_LOGIC_VECTOR (2 downto 0);
begin
	two_bit_comparator0 :  improved_two_bit_comparator port map ( A => A(3), B => B(3), Lt => '0', Eq => '1', Gt => '0', A_LT_B => tmp0(0), A_EQ_B => tmp0(1), A_GT_B => tmp0(2));
	two_bit_comparator1 :  improved_two_bit_comparator port map ( A => A(2), B => B(2), Lt => tmp0(0), Eq => tmp0(1), Gt => tmp0(2), A_LT_B => tmp1(0), A_EQ_B => tmp1(1), A_GT_B => tmp1(2));
	two_bit_comparator2 :  improved_two_bit_comparator port map ( A => A(1), B => B(1), Lt => tmp1(0), Eq => tmp1(1), Gt => tmp1(2), A_LT_B => tmp2(0), A_EQ_B => tmp2(1), A_GT_B => tmp2(2));
	two_bit_comparator3 :  improved_two_bit_comparator port map ( A => A(0), B => B(0), Lt => tmp2(0), Eq => tmp2(1), Gt => tmp2(2), A_LT_B => A_LT_B, A_EQ_B => A_EQ_B, A_GT_B => A_GT_B);
end structure;

