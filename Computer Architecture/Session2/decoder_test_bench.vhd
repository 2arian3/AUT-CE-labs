--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:46:13 08/22/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session2/decoder_test_bench.vhd
-- Project Name:  Session2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: decoder2to4
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
 
ENTITY decoder_test_bench IS
END decoder_test_bench;
 
ARCHITECTURE behavior OF decoder_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT decoder2to4
    PORT(
         A0 : IN  std_logic;
         A1 : IN  std_logic;
         enable : IN  std_logic;
         O0 : OUT  std_logic;
         O1 : OUT  std_logic;
         O2 : OUT  std_logic;
         O3 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A0 : std_logic := '0';
   signal A1 : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal O0 : std_logic;
   signal O1 : std_logic;
   signal O2 : std_logic;
   signal O3 : std_logic;
 
BEGIN
 
	dec: decoder2to4 port map ( A0 => A0 , A1 => A1 , enable => enable , O0 => O0 , O1 => O1 , O2 => O2 , O3 => O3);
	
	A0 <= '0' , '1' after 100 ns , '0' after 200 ns , '1' after 300 ns , '0' after 400 ns , '1' after 500 ns , '0' after 600 ns ,
	'1' after 700 ns ;
	A1 <= '0' , '1' after 200 ns , '0' after 400 ns , '1' after 600 ns;
	enable <= '0' , '1' after 400 ns;

END;
