/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_print_numbers.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/6 @ 18:37:53
   ████▐█ █
   ████   █ * Last Modified : 2022/03/6 @ 18:41:22
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	do{
		ft_putchar(num);
		num = num + 1;
	}while(num < 58);
}
