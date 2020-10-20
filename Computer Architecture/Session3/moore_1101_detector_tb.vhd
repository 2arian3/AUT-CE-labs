--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:12:49 08/25/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session3/moore_1101_detector_tb.vhd
-- Project Name:  Session3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: moore_1101_detector
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY moore_1101_detector_tb IS
END moore_1101_detector_tb;
 
ARCHITECTURE behavior OF moore_1101_detector_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT moore_1101_detector
    PORT(
         input : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         detected : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal input : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal detected : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: moore_1101_detector PORT MAP (
          input => input,
          clk => clk,
          rst => rst,
          detected => detected
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
		wait for 30 ns;
		input <= '1';
		wait for 20 ns;
		input <= '0';
		wait for 10 ns;
		input <= '1';
		wait for 10 ns;
		input <= '0';
		wait for 10 ns;
		input <= '1';
		wait for 10 ns;
		input <= '0';
		wait for 10 ns;
		input <= '1';
		wait for 20 ns;
		input <= '0';
		wait for 10 ns;
		input <= '1';
		wait for 20 ns;
		input <= '0';
		wait for 10 ns;
		input <= '1';
		wait for 20 ns;
		input <= '1';		
      wait;
   end process;

END;
