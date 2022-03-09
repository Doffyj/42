/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_str_is_alpha.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/09 @ 22:26:58
   ████▐█ █
   ████   █ * Last Modified : 2022/03/09 @ 22:32:08
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return(1);
	do{
		if(str[i] < 41 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
			return(0);
		i++;
	}while(str[i] != '\0');
	return(1);
}
