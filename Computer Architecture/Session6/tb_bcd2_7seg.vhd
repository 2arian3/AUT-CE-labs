--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:08:56 09/08/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session6/tb_bcd2_7seg.vhd
-- Project Name:  Session6
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: bcd2_7seg
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
 
ENTITY tb_bcd2_7seg IS
END tb_bcd2_7seg;
 
ARCHITECTURE behavior OF tb_bcd2_7seg IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bcd2_7seg
    PORT(
         Parallel_in : IN  std_logic_vector(3 downto 0);
         LR : IN  std_logic_vector(1 downto 0);
         clk : IN  std_logic;
         LD : IN  std_logic;
         rst : IN  std_logic;
         seg_data : OUT  std_logic_vector(7 downto 0);
         seg_sel : OUT  std_logic_vector(4 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Parallel_in : std_logic_vector(3 downto 0) := (others => '0');
   signal LR : std_logic_vector(1 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal LD : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal seg_data : std_logic_vector(7 downto 0);
   signal seg_sel : std_logic_vector(4 downto 0);

   -- Clock period definitions
	constant clk_period : time := 2.500 ms;	 
	constant clk_p : time := 1000 ms;	 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bcd2_7seg PORT MAP (
          Parallel_in => Parallel_in,
          LR => LR,
          clk => clk,
          LD => LD,
          rst => rst,
          seg_data => seg_data,
          seg_sel => seg_sel
        );

   -- Clock process definitions
   clk_process :process
   begin
		wait for clk_period/2;
		clk <= not clk;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		
		rst <='1';
		wait for clk_period;
		Parallel_in <= "0000";
		LD <= '1';
		LR <= "00";
		wait for clk_p;
		Parallel_in <= "0001";
		wait for clk_p;
		Parallel_in <="0011";
		wait for clk_p;
		Parallel_in <= "0011";
		wait for clk_p;
		Parallel_in <="0100";
		wait for clk_p;
		Parallel_in <= "0101";
		wait for clk_p;
		Parallel_in <="0110";
		wait for clk_p;
		Parallel_in <= "0111";
		wait for clk_p;
		Parallel_in <="1000";
		wait for clk_p;
		Parallel_in <= "1001";
		wait for clk_p;
		Parallel_in <="1111";
		wait for clk_p;
		LR <= "01";
		wait for clk_p;
		LR <= "01";
		wait for clk_p;
		LR <= "01";
		wait for clk_p;
		LR <= "01";
		wait for clk_p;

		Parallel_in <="1011";
		LR <= "00";
		wait for clk_p;

		LR <= "10";
		wait for clk_p;

		LR <= "10";
		wait for clk_p;
		LR <= "11";

		wait for clk_p;	
		LR <= "11";

		wait for clk_p;
		Parallel_in <="1001";
		LR <= "00";
		LD <= '0';
		wait for clk_p*2;
		LD <= '1';
		wait;	
   end process;

END;
