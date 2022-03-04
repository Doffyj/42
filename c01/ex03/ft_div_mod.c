/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_div_mod.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/3 @ 15:46:04
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 15:50:31
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
