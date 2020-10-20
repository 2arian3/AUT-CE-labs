----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:47:56 08/25/2020 
-- Design Name: 
-- Module Name:    Seq_detector - Behavioral 
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

entity Seq_detector is
    Port ( input : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           detected : out  STD_LOGIC);
end Seq_detector;

architecture Mealy of Seq_detector is
	type states is (S0, S1, S2, S3);
	signal state : states := S0;
	signal next_state : states := S0;

begin
	clock_reset : process(clk, rst)
				 begin
					if rst'event and rst = '1' then
						state <= S0;
					end if;
					if clk'event and clk = '1' then
						state <= next_state;
					end if;
				 end process;
	transition : process(state, input)
					 begin
						case state is
							when S0 => if input = '0' then
									next_state <= S0;
									detected <= '0';
							   else
									next_state <= S1;
									detected <= '0';
								end if;
							when S1 => if input = '0' then
									next_state <= S2;
									detected <= '0';
								else
									next_state <= S3;
									detected <= '0';
								end if;
							when S2 => if input = '0' then
									next_state <= S0;
									detected <= '0';
								else
									next_state <= S1;
									detected <= '1';
								end if;
							when S3 => if input = '0' then 
									next_state <= S0;
									detected <= '1';
								else
									next_state <= S0;
									detected <= '0';
								end if;
						end case;
				  end process;
end Mealy;

