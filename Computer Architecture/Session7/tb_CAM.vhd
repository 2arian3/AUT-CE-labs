--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   02:46:19 09/12/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session7/tb_CAM.vhd
-- Project Name:  Session7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CAM
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
use IEEE.Numeric_STD.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_CAM IS
END tb_CAM;
 
ARCHITECTURE behavior OF tb_CAM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CAM
    PORT(
         Data_in : IN  std_logic_vector(7 downto 0);
         w : IN  std_logic;
         r : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         addr_out : OUT  std_logic_vector(3 downto 0);
         hit_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal w : std_logic := '0';
   signal r : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '1';

 	--Outputs
   signal addr_out : std_logic_vector(3 downto 0);
   signal hit_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CAM PORT MAP (
          Data_in => Data_in,
          w => w,
          r => r,
          clk => clk,
          rst => rst,
          addr_out => addr_out,
          hit_out => hit_out
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
      rst <= '0';
		wait for 10 ns;
		rst <= '1';
		w <= '1';
		for i in 0 to 100 loop
			Data_in <= std_logic_vector(to_unsigned(i, 8));
			wait for 10 ns;
		end loop;
		for i in 50 to 100 loop
			Data_in <= std_logic_vector(to_unsigned(i, 8));
			wait for 10 ns;
		end loop;
		w <= '0';
		r <= '1';
		for i in 50 to 100 loop
			Data_in <= std_logic_vector(to_unsigned(i, 8));
			wait for 10 ns;
		end loop;
		wait;
   end process;

END;
