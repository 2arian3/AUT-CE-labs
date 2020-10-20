----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:51:08 08/30/2020 
-- Design Name: 
-- Module Name:    full_adder - Behavioral 
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
    Port ( a : in  STD_LOGIC;
           b : in  STD_LOGIC;
           cin : in  STD_LOGIC;
           sum : out  STD_LOGIC;
           cout : out  STD_LOGIC);
end full_adder;

architecture structure of full_adder is
	component half_adder is
		Port( a : in STD_LOGIC;
				b : in STD_LOGIC;
				sum : out STD_LOGIC;
				cout : out STD_LOGIC);
	end component half_adder;
	
	
	signal internal_signal0,internal_signal1,internal_signal2 : STD_LOGIC;
begin
	half_adder_instance0 : half_adder port map ( a => a , b => b , sum => internal_signal0 , cout => internal_signal1 );
	half_adder_instance1 : half_adder port map ( a => internal_signal0 , b => cin , sum => sum , cout => internal_signal2 );
	cout <= internal_signal1 or internal_signal2;
end structure;

