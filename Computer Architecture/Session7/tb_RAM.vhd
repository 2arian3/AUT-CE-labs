--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:05:11 09/11/2020
-- Design Name:   
-- Module Name:   D:/Courses/Computer  architecture/CA Lab/Codes/Session7_part1and2/tb_RAM.vhd
-- Project Name:  Session7_part1and2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM
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
use IEEE.numeric_std.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_RAM IS
END tb_RAM;
 
ARCHITECTURE behavior OF tb_RAM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM
    PORT(
         Data_in : IN  std_logic_vector(7 downto 0);
         Addr : IN  std_logic_vector(0 to 3);
         w : IN  std_logic;
         r : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         Data_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal Addr : std_logic_vector(0 to 3) := (others => '0');
   signal w : std_logic := '0';
   signal r : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal Data_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM PORT MAP (
          Data_in => Data_in,
          Addr => Addr,
          w => w,
          r => r,
          clk => clk,
          rst => rst,
          Data_out => Data_out
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
      rst <= '1' , '0' after 10 ns , '1' after 20 ns ;

      -- insert stimulus here 
		w <= '1';
		r <= '0';
		wait for 20 ns;
		Data_in <= "00000001";
		Addr <= "1111";
		wait for 20 ns;
		Data_in <= "00000101";
		Addr <= "1110";
		wait for 20 ns;
		Data_in <= "11100001";
		Addr <= "1010";
		wait for 20 ns;
		Data_in <= "00000000";
		Addr <= "0011";
		wait for 20 ns;
		Data_in <= "00111001";
		Addr <= "0100";
		wait for 20 ns;
		Data_in <= "00000010";
		Addr <= "1100";
		wait for 20 ns;
		Data_in <= "10000001";
		Addr <= "1000";
		wait for 20 ns;
		Data_in <= "11111111";
		Addr <= "0000";
		wait for 20 ns;
		Data_in <= "11110000";
		Addr <= "1111";
		wait for 20 ns;
		Data_in <= "00001001";
		Addr <= "1111";
		wait for 20 ns;
		Data_in <= "00001111";
		Addr <= "1111";
		
		
		w <= '0';
		r <= '1';
		wait for 20 ns;
		Addr <= "1111";
		wait for 20 ns;
		Addr <= "1110";
		wait for 20 ns;
		Addr <= "1010";
		wait for 20 ns;
		Addr <= "0011";
		wait for 20 ns;
		Addr <= "0100";
		wait for 20 ns;
		Addr <= "1100";
		wait for 20 ns;
		Addr <= "1000";
		wait for 20 ns;
		Addr <= "0000";
		wait for 20 ns;
		Addr <= "1111";
		wait for 20 ns;
		Addr <= "1111";
		wait for 20 ns;
		Addr <= "1111";

      wait;
   end process;

END;
