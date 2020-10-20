----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:36:15 08/22/2020 
-- Design Name: 
-- Module Name:    multiplexer4to1 - Behavioral 
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

entity multiplexer4to1 is
    Port ( A : in  STD_LOGIC;
           B : in  STD_LOGIC;
           C : in  STD_LOGIC;
           D : in  STD_LOGIC;
           S : in  STD_LOGIC_VECTOR (1 downto 0);
			  e : in STD_LOGIC;
           output : out  STD_LOGIC);
end multiplexer4to1;

architecture structure of multiplexer4to1 is
	component and_gate is
		Port( A : in STD_LOGIC;
				B : in STD_LOGIC;
				C : out STD_LOGIC);
	end component and_gate;
	
	component or_gate is
		Port( A : in STD_LOGIC;
				B : in STD_LOGIC;
				C : out STD_LOGIC);
	end component or_gate;
	
	component not_gate is
		Port( A : in STD_LOGIC;
				Anot : out STD_LOGIC);
	end component not_gate;
	
	signal S0not, S1not : STD_LOGIC;
	signal S0S1, S0S1not, S0notS1, S0notS1not : STD_LOGIC;
	signal Atmp, Btmp, Ctmp, Dtmp : STD_LOGIC;
	signal tmp0, tmp1, tmp2 : STD_LOGIC;
begin
	not_gate_for_S0 : not_gate port map( A => S(0), Anot => S0not);
	not_gate_for_S1 : not_gate port map( A => S(1), Anot => S1not);
	and_gate_for_S0S1 : and_gate port map( A => S(0), B => S(1), C => S0S1);
	and_gate_for_S0S1not : and_gate port map( A => S(0), B => S1not, C => S0S1not);
	and_gate_for_S0notS1 : and_gate port map( A => S0not, B => S(1), C => S0notS1);
	and_gate_for_S0notS1not : and_gate port map( A => S0not, B => S1not, C => S0notS1not);
	and_gate_for_A : and_gate port map( A => A, B => S0notS1not, C => Atmp);
	and_gate_for_B : and_gate port map( A => B, B => S0S1not, C => Btmp);
	and_gate_for_C : and_gate port map( A => C, B => S0notS1, C => Ctmp);
	and_gate_for_D : and_gate port map( A => D, B => S0S1, C => Dtmp);
	or_gate_for_AtmpOrBtmp : or_gate port map( A => Atmp, B => Btmp, C => tmp0);
	or_gate_for_AtmpOrBtmpOrCtmp : or_gate port map( A => tmp0, B => Ctmp, C => tmp1);
	or_gate_for_AtmpOrBtmpOrCtmpOrDtmp : or_gate port map( A => tmp1, B => Dtmp, C => tmp2);
	res_and_enable : and_gate port map( A => tmp2, B => e, C => output);
end structure;

