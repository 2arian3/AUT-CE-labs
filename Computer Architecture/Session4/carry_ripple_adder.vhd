----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:06:36 08/30/2020 
-- Design Name: 
-- Module Name:    carry_ripple_adder - Behavioral 
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

entity carry_ripple_adder is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
			  cin : in STD_LOGIC;
           Sum : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end carry_ripple_adder;

architecture structure of carry_ripple_adder is
	component full_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				cin : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component full_adder;
	
	signal c1,c2,c3: STD_LOGIC;
 
begin
	FA1: full_adder port map( a => A(0), b => B(0), cin => cin, cout=> c1 , sum => Sum(0));
	FA2: full_adder port map( a => A(1), b => B(1), cin => c1, cout => c2, sum => Sum(1));
	FA3: full_adder port map( a => A(2), b => B(2), cin => c2, cout => c3, sum => Sum(2));
	FA4: full_adder port map( a => A(3), b => B(3), cin => c3, cout => cout, sum => Sum(3));
end structure;

