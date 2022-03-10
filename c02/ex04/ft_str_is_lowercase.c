/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_str_is_lowercase.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/10 @ 22:25:13
   ████▐█ █
   ████   █ * Last Modified : 2022/03/10 @ 22:28:51
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return(1);
	do
	{
		if(str[i] < 97 || str[i] > 122)
			return(0);
		i++;
	}while(str[i] != '\0');
	return(1);
}
