LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY divider_testbench IS
END divider_testbench;
 
ARCHITECTURE behavior OF divider_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT divider
    PORT(
         dividend : IN  std_logic_vector(7 downto 0);
         divisor : IN  std_logic_vector(3 downto 0);
         divide_zero_err : OUT  std_logic;
         overflow : OUT  std_logic;
         Quotient : OUT  std_logic_vector(3 downto 0);
         Remainder : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal dividend : std_logic_vector(7 downto 0) := (others => '0');
   signal divisor : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal divide_zero_err : std_logic;
   signal overflow : std_logic;
   signal Quotient : std_logic_vector(3 downto 0);
   signal Remainder : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: divider PORT MAP (
          dividend => dividend,
          divisor => divisor,
          divide_zero_err => divide_zero_err,
          overflow => overflow,
          Quotient => Quotient,
          Remainder => Remainder
        );
 

   -- Stimulus process
   stim_proc: process
   begin		
		dividend  <=
			X"0A" after 00 ns ,
			X"30" after 10 ns ,
			X"18" after 20 ns ,
			X"20" after 30 ns ,
			X"39" after 40 ns ,
			X"53" after 50 ns ,
			X"62" after 60 ns ,
			X"15" after 70 ns ,
			X"6D" after 80 ns ,
			X"FF" after 90 ns ,
			X"08" after 100 ns ,
			X"0B" after 110 ns ;

	divisor <=
			X"2" after 00 ns ,
			X"5" after 10 ns ,
			X"6" after 15 ns ,
			X"0" after 25 ns ,
			X"E" after 35 ns ,
			X"4" after 45 ns ,
			X"8" after 55 ns ,
			X"9" after 65 ns ,
			X"7" after 75 ns ,
			X"3" after 85 ns ,
			X"A" after 95 ns ,
			X"B" after 105 ns ,
			X"1" after 115 ns ;
      wait;
   end process;

END;
