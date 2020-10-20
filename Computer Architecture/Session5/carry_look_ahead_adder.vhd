----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:17:02 09/05/2020 
-- Design Name: 
-- Module Name:    carry_look_ahead_adder - Behavioral 
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

entity carry_look_ahead_adder is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           cin : in  STD_LOGIC;
           Sum : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end carry_look_ahead_adder;

architecture structure of carry_look_ahead_adder is
	component full_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				cin : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component full_adder;
	
	signal P, G, S, C : STD_LOGIC_VECTOR (3 downto 0);
begin
	FA1 : full_adder port map( a => A(0), b => B(0), cin => C(0), sum => Sum(0), cout => open );
	FA2 : full_adder port map( a => A(1), b => B(1), cin => C(1), sum => Sum(1), cout => open );
	FA3 : full_adder port map( a => A(2), b => B(2), cin => C(2), sum => Sum(2), cout => open );
	FA4 : full_adder port map( a => A(3), b => B(3), cin => C(3), sum => Sum(3), cout => open );
	P(0) <= A(0) or B(0);
	P(1) <= A(1) or B(1);
	P(2) <= A(2) or B(2);
	P(3) <= A(3) or B(3);
	G(0) <= A(0) and B(0);
	G(1) <= A(1) and B(1);
	G(2) <= A(2) and B(2);
	G(3) <= A(3) and B(3);
	C(0) <= cin;
	C(1) <= G(0) or (P(0) and C(0));
	C(2) <= G(1) or (P(1) and C(1));
	C(3) <= G(2) or (P(2) and C(2));
	cout <= G(3) or (P(3) and C(3));
end structure;

