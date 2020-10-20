--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:01:08 09/11/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session7_part1and2/tb_ROM.vhd
-- Project Name:  Session7_part1and2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ROM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
use ieee.numeric_std.All;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_ROM IS
END tb_ROM;
 
ARCHITECTURE behavior OF tb_ROM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ROM
    PORT(
         Addr : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         Data_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Addr : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';

 	--Outputs
   signal Data_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ROM PORT MAP (
          Addr => Addr,
          clk => clk,
          Data_out => Data_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
	
		Addr <= "0000";
		wait for 60 ns;
		Addr <= "0001";
		wait for 60 ns;
		Addr <= "0010";
		wait for 60 ns;
		Addr <= "0011";
		wait for 60 ns;
		Addr <= "0100";
		wait for 60 ns;
		Addr <= "0101";
		wait for 60 ns;
		Addr <= "0110";
		wait for 60 ns;
		Addr <= "0111";
		wait for 60 ns;
		Addr <= "1000";
		wait for 60 ns;
		Addr <= "1001";
		wait for 60 ns;
		Addr <= "1010";
		wait for 60 ns;
		Addr <= "1011";
		wait for 60 ns;
		Addr <= "1100";
		wait for 60 ns;
		Addr <= "1101";
		wait for 60 ns;
		Addr <= "1110";
		wait for 60 ns;
		Addr <= "1111";
		wait for 60 ns;

      wait;
   end process;

END;
