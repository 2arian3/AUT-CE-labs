--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:44:04 08/22/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session2/comparator_test_bench.vhd
-- Project Name:  Session2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: four_bit_comparator
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
 
ENTITY comparator_test_bench IS
END comparator_test_bench;
 
ARCHITECTURE behavior OF comparator_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_comparator
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         A_GT_B : OUT  std_logic;
         A_EQ_B : OUT  std_logic;
         A_LT_B : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal A_GT_B : std_logic;
   signal A_EQ_B : std_logic;
   signal A_LT_B : std_logic;
 
BEGIN
	comparator : four_bit_comparator port map( A => A, B => B, A_GT_B => A_GT_B, A_EQ_B => A_EQ_B, A_LT_B => A_LT_B);
	A <= "0011", "1101" after 100 ns, "0001" after 200 ns, "0000" after 300 ns, "0110" after 400 ns, "1111" after 500 ns, "1001" after 600 ns;
	B <= "0001", "0111" after 100 ns, "0001" after 200 ns, "0000" after 300 ns, "1000" after 400 ns, "1101" after 500 ns, "0100" after 600 ns;
END;
