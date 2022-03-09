/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_str_is_numeric.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/09 @ 22:51:03
   ████▐█ █
   ████   █ * Last Modified : 2022/03/09 @ 22:56:14
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ftr_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if(str[i] == '\0')
		return(1);
	do
	{
		if (str[i] < 48 || str[i] > 57)
			return(0);
		i++;
	}
	return(1);
}
