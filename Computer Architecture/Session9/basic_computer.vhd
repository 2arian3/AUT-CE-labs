----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:28:38 09/19/2020 
-- Design Name: 
-- Module Name:    basic_computer - Behavioral 
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

entity basic_computer is
	generic(
		Width : integer := 8;
		C : integer := 5
	);
	Port( clk : in std_logic;
			rst : in std_logic;
			data : out std_logic_vector(Width-1 downto 0));
end basic_computer;

architecture Behavioral of basic_computer is
	component RAM is
		port
		(	Data_in : in std_logic_vector(Width-1 downto 0);
			Addr : in std_logic_vector(C-1 downto 0);
			w : in std_logic ;
			r : in std_logic;
			clk : in std_logic;
			rst : in std_logic;
			Data_out : out std_logic_vector(Width-1 downto 0)
		);
	end component RAM;
	component CPU8bits is
		 Port ( Data_in : in  STD_LOGIC_VECTOR (Width-1 downto 0);
				  clk : in  STD_LOGIC;
				  rst : in  STD_LOGIC;
				  Data_out : out STD_LOGIC_VECTOR (Width-1 downto 0);
				  address : out  STD_LOGIC_VECTOR (C-1 downto 0);
				  we : out  STD_LOGIC;
				  oe : out  STD_LOGIC);
	end component CPU8bits;
	
	signal address : std_logic_vector (C-1 downto 0);
	signal cpu_data : std_logic_vector (Width-1 downto 0);
	signal ram_data : std_logic_vector (Width-1 downto 0);
	signal w, r : std_logic;
	 
begin
	MEMORY : RAM port map(Data_in => cpu_data, Addr => address, w => w, r => r, clk => clk, rst => rst, Data_out => ram_data);
	CPU : CPU8bits port map(Data_in => ram_data, clk => clk, rst => rst, Data_out => cpu_data, address => address, we => w, oe => r);
	data <= cpu_data;
end Behavioral;

