----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:18:30 09/05/2020 
-- Design Name: 
-- Module Name:    array_multiplier - Behavioral 
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

entity array_multiplier is
    Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
           P : out  STD_LOGIC_VECTOR (7 downto 0));
end array_multiplier;

architecture structure of array_multiplier is

	component and2 is
	port(
		in1 : in STD_LOGIC;
		in2 : in STD_LOGIC;
		O : out STD_LOGIC
		);
	end component and2;
	
	component carry_look_ahead_adder is
	port( A : in  STD_LOGIC_VECTOR (3 downto 0);
           B : in  STD_LOGIC_VECTOR (3 downto 0);
			  cin : in STD_LOGIC;
           Sum : out  STD_LOGIC_VECTOR (3 downto 0);
           cout : out  STD_LOGIC);
	end component carry_look_ahead_adder;
	
	signal adder1cout,adder2cout,adder3cout : STD_LOGIC;
	signal adder1out,adder1in1,adder1in2,adder2out,adder2in,adder3in,adder3out,wire0,wire,wire2 : STD_LOGIC_VECTOR(3 downto 0);
	
begin
	--The first digit is index of B and the second digit is index of A
	and00 : and2 port map ( in1 => A(0) , in2 => B(0) , O => adder1in1(0) );
	P(0) <= adder1in1(0);
	
	and01 : and2 port map ( in1 => A(1) , in2 => B(0) , O => adder1in1(1) );
	and02 : and2 port map ( in1 => A(2) , in2 => B(0) , O => adder1in1(2));
	and03 : and2 port map ( in1 => A(3) , in2 => B(0) , O => adder1in1(3));
	
	and10 : and2 port map ( in1 => A(0) , in2 => B(1) , O => adder1in2(0) );
	and11 : and2 port map ( in1 => A(1) , in2 => B(1) , O => adder1in2(1));
	and12 : and2 port map ( in1 => A(2) , in2 => B(1) , O => adder1in2(2));
	and13 : and2 port map ( in1 => A(3) , in2 => B(1) , O => adder1in2(3) );
	
	and20 : and2 port map ( in1 => A(0) , in2 => B(2) , O => adder2in(0) );
	and21 : and2 port map ( in1 => A(1) , in2 => B(2) , O => adder2in(1) );
	and22 : and2 port map ( in1 => A(2) , in2 => B(2) , O => adder2in(2) );
	and23 : and2 port map ( in1 => A(3) , in2 => B(2) , O => adder2in(3) );
	
	and30 : and2 port map ( in1 => A(0) , in2 => B(3) , O => adder3in(0) );
	and31 : and2 port map ( in1 => A(1) , in2 => B(3) , O => adder3in(1) );
	and32 : and2 port map ( in1 => A(2) , in2 => B(3) , O => adder3in(2) );
	and33 : and2 port map ( in1 => A(3) , in2 => B(3) , O => adder3in(3) );
	
	
	wire0(3) <= '0';
	wire0(2 downto 0) <= adder1in1(3 downto 1);
	adder1 : carry_look_ahead_adder port map( A => wire0 , B => adder1in2 , cin => '0' , Sum => adder1out , cout => adder1cout);
	P(1) <= adder1out(0);
	
	wire(2 downto 0) <= adder1out(3 downto 1);
	wire(3) <= adder1cout;
	adder2 : carry_look_ahead_adder port map( A => adder2in , B => wire ,
	cin => '0' , Sum => adder2out , cout => adder2cout);
	P(2) <= adder2out(0);
	
	wire2(2 downto 0) <= adder2out(3 downto 1);
	wire2(3) <= adder2cout;
	adder3 : carry_look_ahead_adder port map( A => adder3in , B => wire2 ,
	cin => '0' , Sum => adder3out , cout => adder3cout);
	
	P(6 downto 3) <= adder3out(3 downto 0);
	P(7) <= adder3cout ;
end structure;

