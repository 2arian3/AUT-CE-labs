----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:27:51 08/24/2020 
-- Design Name: 
-- Module Name:    DFF_ActiveLow - Behavioral 
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
Library IEEE;
USE IEEE.Std_logic_1164.all;

entity DFF_ActiveLow is 
   port(
      Q : out std_logic;    
      Clk :in std_logic;  
   async_reset: in std_logic;  
      D :in  std_logic    
   );
end DFF_ActiveLow;

architecture Behavioral of DFF_ActiveLow is  
begin  
	process(Clk,async_reset)
	begin 
		if(async_reset='0') then 
			Q <= '0';
		elsif(rising_edge(Clk)) then
			Q<= D; 
		end if;      
	end process;  
end Behavioral;

