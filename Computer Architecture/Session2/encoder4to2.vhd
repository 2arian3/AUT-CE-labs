----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:24:12 08/22/2020 
-- Design Name: 
-- Module Name:    encoder4to2 - Behavioral 
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

entity encoder4to2 is
    Port ( A0 : in  STD_LOGIC;
           A1 : in  STD_LOGIC;
           A2 : in  STD_LOGIC;
           A3 : in  STD_LOGIC;
           O0 : out  STD_LOGIC;
           O1 : out  STD_LOGIC;
			  v  : out STD_LOGIC);
end encoder4to2;

architecture gateLevel of encoder4to2 is

	component and_gate is 
	port (
		A,B : in STD_LOGIC;
		C : out STD_LOGIC
	);
	end component and_gate;
	
	component not_gate is
	port(
		A : in STD_LOGIC;
		Anot : out STD_LOGIC
	);
	end component not_gate;
	
	component or_gate is
	port(
		A,B : in STD_LOGIC;
		C : out STD_LOGIC
	);
	end component or_gate;
	
	signal a2Not , a3_or_a2 , a2not_and_a1 , a1_or_a0 : STD_LOGIC;
	
begin
	a2not_gate : not_gate port map ( A => A2 , Anot => a2not );
	a3_or_a2_gate : or_gate port map ( A=> A2 , B => A3 , C => a3_or_a2);
	a2not_and_a1_gate : and_gate port map ( A => A1 , B => a2Not , C => a2not_and_a1);
	O0_producer_gate : or_gate port map ( A => A3 , B => a2not_and_a1 , C => O0);
	valid_bit_gate1 : or_gate port map ( A => A1 , B => A0 , C => a1_or_a0 );
	valid_bit_gate2 : or_gate port map ( A => a3_or_a2 , B => a1_or_a0 , C => v);
	O1 <= a3_or_a2;
end gateLevel;

