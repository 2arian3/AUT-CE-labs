--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:12:50 08/24/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session3/RippleCounter4bit_TestBench.vhd
-- Project Name:  Session3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RiplleCounter4bit
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
 
ENTITY RippleCounter4bit_TestBench IS
END RippleCounter4bit_TestBench;
 
ARCHITECTURE behavior OF RippleCounter4bit_TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RiplleCounter4bit
    PORT(
         en : IN  std_logic;
         clk : IN  std_logic;
         reset : IN  std_logic;
         count : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal en : std_logic := '0';
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';

 	--Outputs
   signal count : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 30 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RiplleCounter4bit PORT MAP (
          en => en,
          clk => clk,
          reset => reset,
          count => count
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
     
      -- insert stimulus here
		en <= '1';
		reset <= '1' after 200 ns , '0' after 400 ns;

      wait;
   end process;

END;
