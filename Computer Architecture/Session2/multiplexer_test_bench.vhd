--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:58:10 08/22/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session2/multiplexer_test_bench.vhd
-- Project Name:  Session2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: four_bit_multiplexer4to1
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
 
ENTITY multiplexer_test_bench IS
END multiplexer_test_bench;
 
ARCHITECTURE behavior OF multiplexer_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_multiplexer4to1
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         C : IN  std_logic_vector(3 downto 0);
         D : IN  std_logic_vector(3 downto 0);
         S : IN  std_logic_vector(1 downto 0);
         enable : IN  std_logic;
         output : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
   signal C : std_logic_vector(3 downto 0) := (others => '0');
   signal D : std_logic_vector(3 downto 0) := (others => '0');
   signal S : std_logic_vector(1 downto 0) := (others => '0');
   signal enable : std_logic := '0';

 	--Outputs
   signal output : std_logic_vector(3 downto 0);
BEGIN
	multiplexer: four_bit_multiplexer4to1 port map( A => A, B => B, C => C, D => D, S => S, enable => enable, output => output);
	
	A <= "1111", "0001" after 100 ns, "1100" after 200 ns, "1111" after 300 ns, "1010" after 400 ns, "1110" after 500 ns, "1001" after 600 ns;
	B <= "1111", "0010" after 100 ns, "1010" after 200 ns, "1110" after 300 ns, "1000" after 400 ns, "0000" after 500 ns, "0001" after 600 ns;
	C <= "1111", "0100" after 100 ns, "1000" after 200 ns, "0011" after 300 ns, "0001" after 400 ns, "1000" after 500 ns, "1111" after 600 ns;
	D <= "1111", "1000" after 100 ns, "0110" after 200 ns, "0000" after 300 ns, "0111" after 400 ns, "1101" after 500 ns, "0011" after 600 ns;
	S <= "00", "01" after 300 ns, "10" after 400 ns, "11" after 500 ns;
	enable <= '0', '1' after 200 ns, '0' after 500 ns;


END;

