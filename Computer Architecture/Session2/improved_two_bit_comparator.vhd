----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:43:26 08/22/2020 
-- Design Name: 
-- Module Name:    improved_two_bit_comparator - Behavioral 
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

entity improved_two_bit_comparator is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           Lt : in  STD_LOGIC;
           Eq : in  STD_LOGIC;
           Gt : in  STD_LOGIC;
           A_GT_B : out  STD_LOGIC;
           A_EQ_B : out  STD_LOGIC;
           A_LT_B : out  STD_LOGIC);
end improved_two_bit_comparator;

architecture structure of improved_two_bit_comparator is
	component two_bit_comparator is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           A_LT_B : out  STD_LOGIC;
			  A_EQ_B : out  STD_LOGIC;
			  A_GT_B : out  STD_LOGIC);
	end component two_bit_comparator;
	component and_gate is
		Port(A : in STD_LOGIC;
			  B : in STD_LOGIC;
			  C : out STD_LOGIC);
	end component and_gate;
	component or_gate is
		Port(A : in STD_LOGIC;
			  B : in STD_LOGIC;
			  C : out STD_LOGIC);
	end component or_gate;
	
	signal tmp0, tmp1 : STD_LOGIC;
	signal L, E, G : STD_LOGIC;
begin
	two_bit_comparator_instance : two_bit_comparator port map ( A => A, B => B, A_LT_B => L, A_EQ_B => E, A_GT_B => G);
	and_gate_instance0 : and_gate port map( A => L, B => Eq, C => tmp0);
	and_gate_instance1 : and_gate port map( A => G, B => Eq, C => tmp1);
	and_gate_instance2 : and_gate port map( A => E, B => Eq, C => A_EQ_B);
	or_gate_instance0 : or_gate port map( A => tmp0, B => Lt, C => A_LT_B);
	or_gate_instance1 : or_gate port map( A => tmp1, B => Gt, C => A_GT_B);
end structure;

