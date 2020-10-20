--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:20:32 08/30/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Ripple_adder_4bit/tb_carry_ripple_adder.vhd
-- Project Name:  Ripple_adder_4bit
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: carry_ripple_adder
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
 
ENTITY tb_carry_ripple_adder IS
END tb_carry_ripple_adder;
 
ARCHITECTURE behavior OF tb_carry_ripple_adder IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT carry_ripple_adder
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
			cin : IN std_logic;
         Sum : OUT  std_logic_vector(3 downto 0);
         cout : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(3 downto 0) := (others => '0');
   signal B : std_logic_vector(3 downto 0) := (others => '0');
	signal cin : std_logic := '0';

 	--Outputs
   signal Sum : std_logic_vector(3 downto 0);
   signal cout : std_logic;

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: carry_ripple_adder PORT MAP (
          A => A,
          B => B,
			 cin => cin,
          Sum => Sum,
          cout => cout
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		cin <= '1' after 100 ns, '0' after 200 ns, '1' after 300 ns;
		
      A <= "0000" , "0001" after 20 ns , "0000" after 40 ns ,"0011" after 60 ns ,"0100" after 80 ns ,"0101" after 100 ns ,
				"0110" after 120 ns ,"0111" after 140 ns ,"1000" after 160 ns ,"1001" after 180 ns ,"1100" after 200 ns,
				"1111" after 220 ns, "1110" after 240 ns, "1101" after 260 ns, "0111" after 280 ns, "1000" after 300 ns;	

		B <= "0101" , "1110" after 20 ns , "0000" after 40 ns ,"1101" after 60 ns ,"1111" after 80 ns ,"1000" after 100 ns ,
				"0001" after 120 ns ,"0100" after 140 ns ,"0100" after 160 ns ,"0111" after 180 ns ,"1111" after 200 ns,
				"0000" after 240 ns, "0011" after 260 ns, "0000" after 280 ns, "0101" after 300 ns;
      wait;
   end process;

END;
