/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_putstr.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/3 @ 15:54:43
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 16:02:35
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	while (str[i] != "\0" )
	{
		write (1, str[i], 1);
		i++;
	}
}
