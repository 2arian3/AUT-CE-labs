--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:58:30 09/21/2020
-- Design Name:   
-- Module Name:   C:/Users/novin/Downloads/Telegram Desktop/Session9/tb_basic_computer.vhd
-- Project Name:  Session9
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: basic_computer
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
 
ENTITY tb_basic_computer IS
END tb_basic_computer;
 
ARCHITECTURE behavior OF tb_basic_computer IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT basic_computer
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
			data : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
	signal data: std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: basic_computer PORT MAP (
          clk => clk,
          rst => rst,
			 data => data
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
      
		rst <= '0' , '1' after 10 ns;

		--Load
		--Data_in <= "00011111";
		--Add
		--Data_in <= "10111111";
		--Clear carry, read pc
		--Data_in <= "01111100";
		--not
		--Data_in <= "11000010";
		--shift
		--Data_in <= "11100111";
		--And
		--Data_in <= "10011111";
		--Read pc
		--Data_in <= "01010101";
		--Write
		--Data_in <= "00100000";
		
      wait;
   end process;

END;
