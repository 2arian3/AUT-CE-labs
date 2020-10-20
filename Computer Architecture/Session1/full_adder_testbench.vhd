--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:58:03 08/17/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session1_FullAdder/full_adder_testbench.vhd
-- Project Name:  Session1_FullAdder
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: full_adder
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
 
ENTITY full_adder_testbench IS
END full_adder_testbench;
 
ARCHITECTURE behavior OF full_adder_testbench IS 
  
    COMPONENT full_adder
    PORT(
         i0 : IN  STD_LOGIC;
         i1 : IN  STD_LOGIC;
         Cin : IN  STD_LOGIC;
         Cout : OUT  STD_LOGIC;
         s : OUT  STD_LOGIC
        );
    END COMPONENT;
    
   signal i0_test : STD_LOGIC ;
   signal i1_test : STD_LOGIC ;
   signal Cin_test : STD_LOGIC ;
   signal Cout_test : STD_LOGIC;
   signal s_test : STD_LOGIC;
 
BEGIN

	dec: full_adder port map ( i0 => i0_test , i1 => i1_test , Cin => Cin_test , Cout => Cout_test , s => s_test );
	
	i0_test <= '0'  , '1' after 200ns , '0' after 400ns , '1' after 600ns  ;
	i1_test <= '1'  , '0' after 100ns , '1' after 200ns , '0' after 300ns ,
	'1' after 400ns , '0' after 500ns , '1' after 600ns , '0' after 700ns;
	Cin_test <= '1' , '0' after 400ns;
	
END behavior;
