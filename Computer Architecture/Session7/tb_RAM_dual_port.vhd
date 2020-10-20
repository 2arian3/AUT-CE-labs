--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   00:24:55 09/13/2020
-- Design Name:   
-- Module Name:   C:/Users/Aryan/Documents/University/Computer Architecture/Session7/tb_RAM_dual_port.vhd
-- Project Name:  Session7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM_dual_port
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
 
ENTITY tb_RAM_dual_port IS
END tb_RAM_dual_port;
 
ARCHITECTURE behavior OF tb_RAM_dual_port IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM_dual_port
    PORT(
         input_A : IN  std_logic_vector(7 downto 0);
         Addr_A : IN  std_logic_vector(3 downto 0);
         w_a : IN  std_logic;
         r_a : IN  std_logic;
         input_B : IN  std_logic_vector(7 downto 0);
         Addr_B : IN  std_logic_vector(3 downto 0);
         w_b : IN  std_logic;
         r_b : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         output_A : OUT  std_logic_vector(7 downto 0);
         output_B : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal input_A : std_logic_vector(7 downto 0) := (others => '0');
   signal Addr_A : std_logic_vector(3 downto 0) := (others => '0');
   signal w_a : std_logic := '0';
   signal r_a : std_logic := '0';
   signal input_B : std_logic_vector(7 downto 0) := (others => '0');
   signal Addr_B : std_logic_vector(3 downto 0) := (others => '0');
   signal w_b : std_logic := '0';
   signal r_b : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal output_A : std_logic_vector(7 downto 0);
   signal output_B : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM_dual_port PORT MAP (
          input_A => input_A,
          Addr_A => Addr_A,
          w_a => w_a,
          r_a => r_a,
          input_B => input_B,
          Addr_B => Addr_B,
          w_b => w_b,
          r_b => r_b,
          clk => clk,
          rst => rst,
          output_A => output_A,
          output_B => output_B
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
		wait for 10 ns;
		rst <= '1';
      w_a <= '1';
		wait for 10 ns;
		input_A <= "00001111";
		Addr_A <= "0011";
		wait for 10 ns;
		r_b <= '1';
		wait for 10 ns;
		input_B <= "00001111";
		Addr_B <= "0011";
		wait for 10 ns;
		w_b <= '1';
		r_b <= '0';
		Addr_B <= "0010";
		input_B <= "01010101";
		wait for 10 ns;
		w_a <= '0';
		r_a <= '1';
		wait for 10 ns;
		input_B <= "00110011";
		Addr_A <= "0010";
		wait;
   end process;

END;
