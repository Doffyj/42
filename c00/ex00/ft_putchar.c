/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_putchar.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/6 @ 18:32:08
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 18:33:47
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}
