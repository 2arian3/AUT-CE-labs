--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:14:48 08/24/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session3/TFF_TestBench.vhd
-- Project Name:  Session3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TFF
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
 
ENTITY TFF_TestBench IS
END TFF_TestBench;
 
ARCHITECTURE behavior OF TFF_TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TFF
    PORT(
         T : IN  std_logic;
         CLK : IN  std_logic;
         RES : IN  std_logic;
         Q : OUT  std_logic
			);
    END COMPONENT;
    

   --Inputs
   signal T : std_logic := '0';
   signal CLK : std_logic := '0';
   signal RES : std_logic := '0';

 	--Outputs
   signal Q : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 100 ns;
 
BEGIN
 
   dec: TFF PORT MAP (
          T => T,
          CLK => CLK,
          RES => RES,
          Q => Q
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      
      -- insert stimulus here
		T <= '0' , '1' after 100 ns , '0' after 800 ns;
		RES <= '0' , '1' after 250 ns , '0' after 400 ns;

      wait;
   end process;

END;
