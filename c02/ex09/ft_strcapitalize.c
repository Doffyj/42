/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strcapitalize.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/10 @ 23:05:18
   ████▐█ █
   ████   █ * Last Modified : 2022/03/10 @ 23:10:48
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	do
	{
		if( i = 0 && (str[i] > 96 && str[i] < 123))
				str[0] = str[0] - 32;
		else if(str[i-1] = ' ' && (str[i] > 96 && str[i] < 123))
			str[i] = str[i] -32;
		i++;
	}while(str[i] != '\0);
	return(str);
}
