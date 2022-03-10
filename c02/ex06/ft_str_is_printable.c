/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_str_is_printable.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/10 @ 22:34:58
   ████▐█ █
   ████   █ * Last Modified : 2022/03/10 @ 22:42:16
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if(str[i] == '\0')
		return(1);
	do
	{
		if(str[i] < 32 || str[i] > 95)
			return(0);
		i++;
	}while(str[i] != '\0');
	return(1);
}
