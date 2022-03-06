/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_print_reverse_alphabet.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/6 @ 18:34:33
   ████▐█ █
   ████   █ * Last Modified : 2022/03/6 @ 18:37:02
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	letter;
	
	letter = 122;
	do{
		ft_putchar(letter);
		letter = letter - 1;
	}while(letter > 96);
}
