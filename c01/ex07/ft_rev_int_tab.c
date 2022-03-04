/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_rev_int_tab.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/3 @ 16:09:45
   ████▐█ █
   ████   █ * Last Modified : 2022/03/3 @ 18:02:55
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[];
	int	i;
	int	j;

	i = size;
	j = 0;
	while (j < size)
	{
		temp[j] = tab[i];
		i--;
		j++;
	}
	tab = temp;
}
