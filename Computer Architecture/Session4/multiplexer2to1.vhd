----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:43:49 08/30/2020 
-- Design Name: 
-- Module Name:    multiplexer2to1 - Behavioral 
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

entity multiplexer2to1 is
    Port ( i0 : in  STD_LOGIC;
           i1 : in  STD_LOGIC;
           s : in  STD_LOGIC;
           en : in  STD_LOGIC;
           o : out  STD_LOGIC);
end multiplexer2to1;

architecture Behavioral of multiplexer2to1 is

begin
	o <= ((i0 and not s) or (i1 and s)) and en;
end Behavioral;

