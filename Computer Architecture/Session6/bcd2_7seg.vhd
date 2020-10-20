----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:57:46 09/08/2020 
-- Design Name: 
-- Module Name:    bcd2_7seg - Behavioral 
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
entity bcd2_7seg is
port (
	Parallel_in : in std_logic_vector (3 downto 0);
	LR : in std_logic_vector (1 downto 0);
	clk ,LD, rst : in std_logic;
	seg_data : out std_logic_vector (7 downto 0);
	seg_sel : out std_logic_vector (4 downto 0)
);
end entity bcd2_7seg;
architecture bcd2_7seg_arch of bcd2_7seg is 
	component Reg_4bits is
		Port( Parallel_in : in  STD_LOGIC_VECTOR (3 downto 0);
           LR : in  STD_LOGIC_VECTOR (1 downto 0);
           LD : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           Reg_out : inout  STD_LOGIC_VECTOR (3 downto 0));
	end component Reg_4bits;
	
	component Frq_divider is
		Port ( clk_in : in  STD_LOGIC;
           clk_out : out  STD_LOGIC);
	end component Frq_divider;

	--declare your signal here 
	
	signal internal_signals : STD_LOGIC_VECTOR (3 downto 0);
	signal clk_divided : STD_LOGIC;

begin
FRQ_DVD : Frq_divider port map( clk_in => clk, clk_out => clk_divided);
REG : Reg_4bits port map(Parallel_in => Parallel_in,
								 LR => LR,
								 LD => LD,
								 rst => rst,
								 clk => clk_divided,
								 Reg_out => internal_signals);
with internal_signals select 
	seg_data <= "00111111" when "0000",  -- 0 
		    "00000110" when "0001",  -- 1 
		    "01011011" when "0010",  -- 2
		    "01001111" when "0011",  -- 3
		    "01100110" when "0100",  -- 4
		    "01101101" when "0101",  -- 5
		    "01111101" when "0110",  -- 6
		    "00000111" when "0111",  -- 7
		    "01111111" when "1000",  -- 8
		    "01101111" when "1001",  -- 9
		    "00111000" when others;	-- L letter	    

seg_sel <= "00001";
end bcd2_7seg_arch; 

