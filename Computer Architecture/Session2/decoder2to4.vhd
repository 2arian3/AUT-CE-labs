----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    06:14:02 08/22/2020 
-- Design Name: 
-- Module Name:    decoder2to4 - Behavioral 
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

entity decoder2to4 is
    Port ( A0 : in  STD_LOGIC;
           A1 : in  STD_LOGIC;
			  enable : in STD_LOGIC;
           O0 : out  STD_LOGIC;
           O1 : out  STD_LOGIC;
           O2 : out  STD_LOGIC;
           O3 : out  STD_LOGIC);
end decoder2to4;

architecture gateLevel of decoder2to4 is

	component and_gate is
	Port (
		A : in STD_LOGIC;
		B : in STD_LOGIC;
		C : out STD_LOGIC
	);
	end component and_gate;
		
	component not_gate is
	Port(
		A : in STD_LOGIC;
		Anot : out STD_LOGIC
	);
	end component not_gate;

	signal a0not , a1not : STD_LOGIC;
	signal tmp : STD_LOGIC_VECTOR (3 downto 0);
	
begin
	not_gate_for_A0 : not_gate port map ( A => A0 , Anot => a0not );
	not_gate_for_A1 : not_gate port map ( A => A1 , Anot => a1not );
	and_gate_for_O0 : and_gate port map ( A => a0not , B => a1not , C => tmp(0));
	and_gate_for_O1 : and_gate port map ( A => A0 , B => a1not , C => tmp(1));
	and_gate_for_O2 : and_gate port map ( A => a0not , B => A1 , C => tmp(2));
	and_gate_for_O3 : and_gate port map ( A => A0 , B => A1 , C => tmp(3));
	and_gate_for_enable0 : and_gate port map ( A => tmp(0), B => enable, C => O0);
	and_gate_for_enable1 : and_gate port map ( A => tmp(1), B => enable, C => O1);
	and_gate_for_enable2 : and_gate port map ( A => tmp(2), B => enable, C => O2);
	and_gate_for_enable3 : and_gate port map ( A => tmp(3), B => enable, C => O3);
end gateLevel;

