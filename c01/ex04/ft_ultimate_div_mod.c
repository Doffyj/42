/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_ultimate_div_mod.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/3 @ 15:51:06
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 15:53:18
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = tmp / *b;
	*b = tmp % *b;
}
