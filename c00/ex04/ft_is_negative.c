/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_is_negative.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/6 @ 18:41:22
   ████▐█ █
   ████   █ * Last Modified : 2022/03/6 @ 18:51:52
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int	n)
{
	char	pn;

	if(n >= 0)
	{
		n = 'P';
		ft_putchar(pn);
	}
	else{
		n = 'N';
		ft_putchar(pn);
	}
}
