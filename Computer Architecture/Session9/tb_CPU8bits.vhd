--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:06:07 09/21/2020
-- Design Name:   
-- Module Name:   C:/Users/novin/Downloads/Telegram Desktop/Session9/tb_CPU8bits.vhd
-- Project Name:  Session9
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CPU8bits
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
 
ENTITY tb_CPU8bits IS
END tb_CPU8bits;
 
ARCHITECTURE behavior OF tb_CPU8bits IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CPU8bits
    PORT(
         Data_in : IN  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         rst : IN  std_logic;
         Data_out : OUT  std_logic_vector(7 downto 0);
         address : OUT  std_logic_vector(4 downto 0);
         we : OUT  std_logic;
         oe : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal Data_out : std_logic_vector(7 downto 0);
   signal address : std_logic_vector(4 downto 0);
   signal we : std_logic;
   signal oe : std_logic;

   -- Clock period definitions
   constant clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CPU8bits PORT MAP (
          Data_in => Data_in,
          clk => clk,
          rst => rst,
          Data_out => Data_out,
          address => address,
          we => we,
          oe => oe
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
    
      -- insert stimulus here 
		rst <= '0' , '1' after 10 ns;
		
		--Load
		Data_in <= "00011111";
		wait for 80 ns;
		--Add
		Data_in <= "10110010";
		wait for 80 ns;
		--Clear carry, read pc
		Data_in <= "01111100";
		wait for 80 ns;
		--not
		Data_in <= "11000010";
		wait for 80 ns;
		--shift
		Data_in <= "11100111";
		wait for 80 ns;
		--And
		Data_in <= "10011111";
		wait for 80 ns;
		--Read pc
		Data_in <= "01010101";
		wait for 80 ns;
		--Write
		Data_in <= "00100000";
		
      wait;
   end process;

END;
