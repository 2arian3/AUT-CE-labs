----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:27:01 08/22/2020 
-- Design Name: 
-- Module Name:    two_bit_comparator - Behavioral 
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

entity two_bit_comparator is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           A_LT_B : out  STD_LOGIC;
			  A_EQ_B : out  STD_LOGIC;
			  A_GT_B : out  STD_LOGIC);
end two_bit_comparator;

architecture structure of two_bit_comparator is
	component not_gate is
		Port(A : in STD_LOGIC;
			  Anot : out STD_LOGIC);
	end component not_gate;
	component and_gate is
		Port(A : in STD_LOGIC;
			  B : in STD_LOGIC;
			  C : out STD_LOGIC);
	end component and_gate;
	component nor_gate is
		Port(A : in STD_LOGIC;
			  B : in STD_LOGIC;
			  C : out STD_LOGIC);
	end component nor_gate;
	
	signal Anot, Bnot : STD_LOGIC;
	signal AnotAndB, BnotAndA : STD_LOGIC;
	
begin
	not_gate_for_A : not_gate port map( A => A, Anot => Anot);
	not_gate_for_B : not_gate port map( A => B, Anot => Bnot);
	and_gate0 : and_gate port map( A => Anot, B => B, C => AnotAndB);
	and_gate1 : and_gate port map( A => A, B => Bnot, C => BnotAndA);
	nor_gate0 : nor_gate port map( A => AnotAndB, B => BnotAndA, C => A_EQ_B);
	A_GT_B <= BnotAndA;
	A_LT_B <= AnotAndB;
end structure;

