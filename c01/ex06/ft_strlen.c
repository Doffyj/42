/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strlen.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/3 @ 16:05:21
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 16:06:35
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ft_strlen(char *str)
{
	int	a;

	while (str[a] != "\0" )
	{
		a++;
	}
	return (a);
}
