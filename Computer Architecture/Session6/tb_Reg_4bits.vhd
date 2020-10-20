--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   23:27:22 09/07/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session6/tb_Reg_4bits.vhd
-- Project Name:  Session6
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Reg_4bits
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
 
ENTITY tb_Reg_4bits IS
END tb_Reg_4bits;
 
ARCHITECTURE behavior OF tb_Reg_4bits IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Reg_4bits
    PORT(
         Parallel_in : IN  std_logic_vector(3 downto 0);
         LR : IN  std_logic_vector(1 downto 0);
         LD : IN  std_logic;
         rst : IN  std_logic;
         clk : IN  std_logic;
         Reg_out : INOUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Parallel_in : std_logic_vector(3 downto 0) := (others => '0');
   signal LR : std_logic_vector(1 downto 0) := (others => '0');
   signal LD : std_logic := '0';
   signal rst : std_logic := '1';
   signal clk : std_logic := '0';

	--BiDirs
   signal Reg_out : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Reg_4bits PORT MAP (
          Parallel_in => Parallel_in,
          LR => LR,
          LD => LD,
          rst => rst,
          clk => clk,
          Reg_out => Reg_out
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
      -- hold reset state for 100 ns.
		rst <= '0';
      Parallel_in <= "0101";
		LD <= '1';
		wait for 20 ns;
		
		Parallel_in <= "1111";
		
		wait for 10 ns;
		
		LR <= "01";
		
		wait for 10 ns;
		
		LR <= "00";
		Parallel_in <= "0011";
		
		wait for 10 ns;
		
		LR <= "10";
		
		wait for 10 ns;
		
		LR <= "11";
		wait;
   end process;

END;
