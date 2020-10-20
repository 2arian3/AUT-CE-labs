--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:06:22 08/24/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session3/DFF_TestBench.vhd
-- Project Name:  Session3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DFF_ActiveLow
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
 
ENTITY DFF_TestBench IS
END DFF_TestBench;
 
ARCHITECTURE behavior OF DFF_TestBench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DFF_ActiveLow
    PORT(
         Q : OUT  std_logic;
         Clk : IN  std_logic;
         async_reset : IN  std_logic;
         D : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal async_reset : std_logic := '0';
   signal D : std_logic := '0';

 	--Outputs
   signal Q : std_logic;
 
BEGIN
 
	dec: DFF_ActiveLow PORT MAP (
          Q => Q,
          Clk => Clk,
          async_reset => async_reset,
          D => D
        );
		  
	Clk <= '0' , '1' after 200 ns , '0' after 400 ns , '1' after 600 ns , '0' after 800 ns;
	async_reset <= '0' , '1' after 100 ns , '0' after 300 ns , '1' after 500 ns;
	D <= '1' , '0' after 250 ns , '1' after 550 ns;

END;
