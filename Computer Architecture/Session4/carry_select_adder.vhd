----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:52:49 08/30/2020 
-- Design Name: 
-- Module Name:    carry_select_adder - Behavioral 
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

entity carry_select_adder is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
			  cin : in STD_LOGIC;
           Sum : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
end carry_select_adder;

architecture structure of carry_select_adder is
	component carry_ripple_adder is
		Port( A : in  STD_LOGIC_VECTOR (3 downto 0);
            B : in  STD_LOGIC_VECTOR (3 downto 0);
				cin : in STD_LOGIC;
            Sum : out  STD_LOGIC_VECTOR (3 downto 0);
            cout : out  STD_LOGIC);
	end component carry_ripple_adder;
	
	component full_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				cin : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component full_adder;
	
	component multiplexer2to1 is
		Port( i0 : in STD_LOGIC;
				i1 : in STD_LOGIC;
				s : in STD_LOGIC;
				en : in STD_LOGIC;
				o : out STD_LOGIC);
	end component multiplexer2to1;
	
	signal S: STD_LOGIC_VECTOR (7 downto 0);
	signal c0, c1: STD_LOGIC;

begin
	CRA1 : carry_ripple_adder port map( A => A, B => B, cin => '0', Sum => S(3 downto 0), cout => c0);
	CRA2 : carry_ripple_adder port map( A => A, B => B, cin => '1', Sum => S(7 downto 4), cout => c1);
	MUX1 : multiplexer2to1 port map( i0 => S(0), i1 => S(4), s => cin, en => '1', o => Sum(0));
	MUX2 : multiplexer2to1 port map( i0 => S(1), i1 => S(5), s => cin, en => '1', o => Sum(1));
	MUX3 : multiplexer2to1 port map( i0 => S(2), i1 => S(6), s => cin, en => '1', o => Sum(2));
	MUX4 : multiplexer2to1 port map( i0 => S(3), i1 => S(7), s => cin, en => '1', o => Sum(3));
	MUX5 : multiplexer2to1 port map( i0 => c0, i1 => c1, s => cin, en => '1', o => cout);
end structure;

