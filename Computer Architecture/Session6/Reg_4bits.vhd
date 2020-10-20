----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:49:04 09/07/2020 
-- Design Name: 
-- Module Name:    Reg_4bits - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Reg_4bits is
    Port ( Parallel_in : in  STD_LOGIC_VECTOR (3 downto 0);
           LR : in  STD_LOGIC_VECTOR (1 downto 0);
           LD : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           Reg_out : inout  STD_LOGIC_VECTOR (3 downto 0));
end Reg_4bits;

architecture structure of Reg_4bits is

	component DFF is
		Port ( D : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           Q : inout  STD_LOGIC);
	end component DFF;
	
	component mux4x1 is
		Port ( in0 : in  STD_LOGIC;
           in1 : in  STD_LOGIC;
           in2 : in  STD_LOGIC;
           in3 : in  STD_LOGIC;
           s0 : in  STD_LOGIC;
           s1 : in  STD_LOGIC;
			  en : in STD_LOGIC;
           o : out  STD_LOGIC);
	end component mux4x1;
	signal internal_signals : STD_LOGIC_VECTOR (3 downto 0);
	signal clkAndLD : STD_LOGIC;
begin
	clkAndLD <= clk and LD;
	MUX0 : mux4x1 port map(in0 => Parallel_in(0), 
								  in1 => Reg_out(1),
								  in2 => Reg_out(1),
								  in3 => '0',
								  s0 => LR(0),
								  s1 => LR(1),
								  en => '1',
								  o => internal_signals(0));
	MUX1 : mux4x1 port map(in0 => Parallel_in(1), 
								  in1 => Reg_out(2),
								  in2 => Reg_out(2),
								  in3 => Reg_out(0),
								  s0 => LR(0),
								  s1 => LR(1),
								  en => '1',
								  o => internal_signals(1));
	MUX2 : mux4x1 port map(in0 => Parallel_in(2), 
								  in1 => Reg_out(3),
								  in2 => Reg_out(3),
								  in3 => Reg_out(1),
								  s0 => LR(0),
								  s1 => LR(1),
								  en => '1',
								  o => internal_signals(2));
	MUX3 : mux4x1 port map(in0 => Parallel_in(3), 
								  in1 => '0',
								  in2 => Reg_out(3),
								  in3 => Reg_out(2),
								  s0 => LR(0),
								  s1 => LR(1),
								  en => '1',
								  o => internal_signals(3));
	DFF0 : DFF port map(D => internal_signals(0),
							  clk => clkAndLD,
							  rst => rst,
							  Q => Reg_out(0));
	DFF1 : DFF port map(D => internal_signals(1),
							  clk => clkAndLD,
							  rst => rst,
							  Q => Reg_out(1));
	DFF2 : DFF port map(D => internal_signals(2),
							  clk => clkAndLD,
							  rst => rst,
							  Q => Reg_out(2));
	DFF3 : DFF port map(D => internal_signals(3),
							  clk => clkAndLD,
							  rst => rst,
							  Q => Reg_out(3));
end structure;

