----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:56:35 09/05/2020 
-- Design Name: 
-- Module Name:    carry_save_multiplier - Behavioral 
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

entity carry_save_multiplier is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           P : out  STD_LOGIC_VECTOR (7 downto 0));
end carry_save_multiplier;

architecture structure of carry_save_multiplier is
	component full_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				cin : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component full_adder;
	
	component half_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component half_adder;
	
	component and2 is
		Port( in1 : in STD_LOGIC;
				in2 : in STD_LOGIC;
				O : out STD_LOGIC);
	end component and2;
	
	signal S, C : STD_LOGIC_VECTOR (11 downto 0);
	signal ANDS : STD_LOGIC_VECTOR (15 downto 0);
	
begin
	and01 : and2 port map( in1 => A(0), in2 => B(1), O => ANDS(0) );
	and02 : and2 port map( in1 => A(0), in2 => B(2), O => ANDS(1) );
	and03 : and2 port map( in1 => A(0), in2 => B(3), O => ANDS(2) );
	and11 : and2 port map( in1 => A(1), in2 => B(1), O => ANDS(3) );
	and12 : and2 port map( in1 => A(1), in2 => B(2), O => ANDS(4) );
	and20 : and2 port map( in1 => A(2), in2 => B(0), O => ANDS(5) );
	and21 : and2 port map( in1 => A(2), in2 => B(1), O => ANDS(6) );
	and22 : and2 port map( in1 => A(2), in2 => B(2), O => ANDS(7) );
	and13 : and2 port map( in1 => A(1), in2 => B(3), O => ANDS(8) );
	and30 : and2 port map( in1 => A(3), in2 => B(0), O => ANDS(9) );
	and31 : and2 port map( in1 => A(3), in2 => B(1), O => ANDS(10) );
	and23 : and2 port map( in1 => A(2), in2 => B(3), O => ANDS(11) );
	and32 : and2 port map( in1 => A(3), in2 => B(2), O => ANDS(12) );
	and33 : and2 port map( in1 => A(3), in2 => B(3), O => ANDS(13) );
	and00 : and2 port map( in1 => A(0), in2 => B(0), O => ANDS(14) );
	and10 : and2 port map( in1 => A(1), in2 => B(0), O => ANDS(15) );
	HA1 : half_adder port map( a => ANDS(0), b => ANDS(15), sum => S(0), cout => C(0));
	HA2 : half_adder port map( a => ANDS(3), b => ANDS(1), sum => S(1), cout => C(1));
	HA3 : half_adder port map( a => ANDS(4), b => ANDS(2), sum => S(2), cout => C(2));
	FA1 : full_adder port map( a => C(0), b => S(1), cin => ANDS(5), sum => S(3), cout => C(3));
	FA2 : full_adder port map( a => C(1), b => S(2), cin => ANDS(6), sum => S(4), cout => C(4));
	FA3 : full_adder port map( a => C(2), b => ANDS(8), cin => ANDS(7), sum => S(5), cout => C(5));
	FA4 : full_adder port map( a => C(3), b => S(4), cin => ANDS(9), sum => S(6), cout => C(6));
	FA5 : full_adder port map( a => C(4), b => S(5), cin => ANDS(10), sum => S(7), cout => C(7));
	FA6 : full_adder port map( a => C(5), b => ANDS(11), cin => ANDS(12), sum => S(8), cout => C(8));
	HA4 : half_adder port map( a => C(6), b => S(7), sum => S(9), cout => C(9));
	FA7 : full_adder port map( a => C(7), b => S(8), cin => C(9), sum => S(10), cout => C(10));
	FA8 : full_adder port map( a => C(8), b => ANDS(13), cin => C(10), sum => S(11), cout => C(11));
	P(0) <= ANDS(14);
	P(1) <= S(0);
	P(2) <= S(3);
	P(3) <= S(6);
	P(4) <= S(9);
	P(5) <= S(10);
	P(6) <= S(11);
	P(7) <= C(11);
end structure;

