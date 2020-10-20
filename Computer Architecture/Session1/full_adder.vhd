----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:40:51 08/17/2020 
-- Design Name: 
-- Module Name:    full_adder - structure 
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

entity full_adder is
    Port ( i0 : in  STD_LOGIC;
           i1 : in  STD_LOGIC;
           Cin : in  STD_LOGIC;
           Cout : out  STD_LOGIC;
           s : out  STD_LOGIC);
end full_adder;

architecture structure of full_adder is
	
	component half_adder is
		Port(
			in1, in2 : in STD_LOGIC;
			out1 , out2: out STD_LOGIC
		);
	end component half_adder;
	
	component or_gate is
		Port(
			A,B : in STD_LOGIC;
			C : out STD_LOGIC
		);
	end component or_gate;
	
	signal internal_signal0,internal_signal1,internal_signal2 : STD_LOGIC;

begin
	half_adder_instance0 : half_adder port map ( in1 => i0 , in2 => i1 , out1 => internal_signal0 , out2 => internal_signal1 );
	half_adder_instance1 : half_adder port map ( in1 => internal_signal0 , in2 => Cin , out1 => s , out2 => internal_signal2 );
	or_gate_instance0 : or_gate port map ( A => internal_signal1 , B => internal_signal2 , C => Cout );
end structure;

