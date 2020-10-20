--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:51:48 09/05/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session5/basic_multiplier_tb.vhd
-- Project Name:  Session5
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: basic_multiplier
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
USE ieee.numeric_std.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY basic_multiplier_tb IS
END basic_multiplier_tb;
 
ARCHITECTURE behavior OF basic_multiplier_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT basic_multiplier
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         P : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal P : std_logic_vector(7 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: basic_multiplier PORT MAP (
          A => A,
          B => B,
          P => P
        );
   -- Stimulus process
   stim_proc: process
   begin		
		for A_loop in 0 to 15 loop
			for B_loop in 0 to 15 loop
				A <= std_logic_vector(to_unsigned(A_loop, A'length));
				B <= std_logic_vector(to_unsigned(B_loop, B'length));
				wait for 10 ns;
			end loop;
		end loop;
      wait;
   end process;

END;
