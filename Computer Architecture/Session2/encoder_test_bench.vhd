--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:55:19 08/22/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session2/encoder_test_bench.vhd
-- Project Name:  Session2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: encoder4to2
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
 
ENTITY encoder_test_bench IS
END encoder_test_bench;
 
ARCHITECTURE behavior OF encoder_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT encoder4to2
    PORT(
         A0 : IN  std_logic;
         A1 : IN  std_logic;
         A2 : IN  std_logic;
         A3 : IN  std_logic;
         O0 : OUT  std_logic;
         O1 : OUT  std_logic;
         v : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A0 : std_logic := '0';
   signal A1 : std_logic := '0';
   signal A2 : std_logic := '0';
   signal A3 : std_logic := '0';

 	--Outputs
   signal O0 : std_logic;
   signal O1 : std_logic;
   signal v : std_logic;
	
BEGIN
	
	dec: encoder4to2 port map ( A0 => A0 , A1 => A1 , A2 => A2 , A3 => A3 , O0 => O0 , O1 => O1 , v => v);
	
	A0 <= '0' , '1' after 50 ns , '0' after 100 ns , '1' after 150 ns , '0' after 200 ns , '1' after 250 ns , '0' after 300 ns,
		'1' after 350 ns , '0' after 400 ns , '1' after 450 ns , '0' after 500 ns , '1' after 550 ns , '0' after 600 ns ,
		'1' after 650 ns , '0' after 700 ns, '1' after 750 ns;
	A1 <= '0' , '1' after 100 ns , '0' after 200 ns , '1' after 300 ns , '0' after 400 ns , '1' after 500 ns ,
		'0' after 600 ns , '1' after 700 ns;
	A2 <= '0' , '1' after 200 ns , '0' after 400 ns , '1' after 600 ns ;
	A3 <= '0' , '1' after 400 ns;
	
END behavior;

