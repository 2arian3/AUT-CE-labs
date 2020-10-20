----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:29:58 08/24/2020 
-- Design Name: 
-- Module Name:    TFF - Behavioral 
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

entity TFF is
   Port ( T,CLK,RES : in  STD_LOGIC;
          Q : out STD_LOGIC);
end TFF;


architecture Behavioral of TFF is
	signal TEMP:STD_LOGIC:='0';

begin
	process(T,CLK,RES)
		begin
			if(RES='1')then
				TEMP<='0';
			elsif(rising_edge(CLK))then
				if(T='1')then
					TEMP<= not TEMP;
				end if;
			end if;
	end process;
	Q<= TEMP;
end Behavioral;

