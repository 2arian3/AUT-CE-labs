----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:30:58 09/08/2020 
-- Design Name: 
-- Module Name:    Frq_dividor - Behavioral 
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
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Frq_divider is
    Port ( clk_in : in  STD_LOGIC;
           clk_out : out  STD_LOGIC);
end Frq_divider;

architecture arch of Frq_divider is

	signal count : Integer := 1;
	signal tmp : STD_LOGIC := '0';

begin
	process(clk_in)
		begin
			if(rising_edge(clk_in)) then
				count <= count + 1;
			end if;
			if(count = 200) then
				tmp <= not tmp;
				count <= 1;
			end if;
			clk_out <= tmp;
		end process;
end arch;

