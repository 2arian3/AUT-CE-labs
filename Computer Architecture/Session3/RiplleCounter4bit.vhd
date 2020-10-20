----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:45:30 08/24/2020 
-- Design Name: 
-- Module Name:    RiplleCounter4bit - Behavioral 
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

entity RiplleCounter4bit is
	port (
		en , clk, reset : in STD_LOGIC;
		count : out STD_LOGIC_VECTOR(3 downto 0)
		);
end RiplleCounter4bit;

architecture Behavioral of RiplleCounter4bit is
	
	component TFF is
	port (
		Clk ,T ,res : in STD_LOGIC;
		Q : out STD_LOGIC
		);
	end component TFF;
	
	signal ff_out :  STD_LOGIC_VECTOR(3 downto 0);
	signal ff_in :  STD_LOGIC_VECTOR (2 downto 0);

begin
	Tff_instance0 : TFF port map ( T => en , Clk => clk , res => reset , Q => ff_out(0));
	
	ff_in(0) <= ff_out(0) and en;
	Tff_instance1 : TFF port map ( T => ff_in(0) , Clk => clk , res => reset , Q => ff_out(1));
	
	ff_in(1) <= ff_out(1) and ff_in(0);
	Tff_instance2 : TFF port map ( T => ff_in(1) , Clk => clk , res => reset , Q => ff_out(2));
	
	ff_in(2) <= ff_out(2) and ff_in(1);
	Tff_instance3 : TFF port map ( T => ff_in(2) , clk => clk , res => reset , Q => ff_out(3));
	
	count(3 downto 0) <= ff_out(3 downto 0);
	
end Behavioral;

