
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use ieee.numeric_std.all;


entity divider is
    Port ( dividend : in  STD_LOGIC_VECTOR (7 downto 0);
           divisor : in  STD_LOGIC_VECTOR (3 downto 0);
			  divide_zero_err : out STD_LOGIC;
			  overflow : out std_logic;
			  Quotient : out  STD_LOGIC_VECTOR (3 downto 0);
           Remainder : out  STD_LOGIC_VECTOR (3 downto 0)
			  );
end divider;

architecture Behavioral of divider is

	begin

		process(dividend,divisor)is

		variable A : std_logic_vector(3 downto 0);
		variable Qin : std_logic_vector(3 downto 0);
		variable dvf : std_logic := '0';
		variable E : std_logic;

		begin 
			if (divisor = "0000") then
				divide_zero_err <= '1';
			else
				divide_zero_err <= '0';
				A:= dividend(7 downto 4);
				Qin := dividend(3 downto 0);
				if(A>=divisor)then
					dvf := '1';
					A := (others => 'X');
					Qin := (others => 'X');
				elsif(A<divisor)then
					dvf := '0';
					for i in 3 downto 0 loop
						-- shift
						E := A(3);
						A(3 downto 1) := A(2 downto 0);
						A(0):= Qin(3);
						Qin(3 downto 1) := Qin(2 downto 0);
						Qin(0) := '0';
						-- if
						if(E ='1')then
							A := A - divisor;
							Qin(0):='1';
						elsif(E = '0')then
							if(A >= divisor)then
								A := A-divisor;
								Qin(0) := '1';
							end if;
						end if;
					end loop;
				end if;
			end if;
			
			
			overflow <= dvf;
			Remainder <= A;
			Quotient <= Qin;
		end process;

end Behavioral;