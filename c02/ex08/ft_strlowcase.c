/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strlowcase.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/10 @ 22:58:27
   ████▐█ █
   ████   █ * Last Modified : 2022/03/10 @ 23:01:48
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	do
	{
		if(str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}while(str[i] != '\0');
	return(str);
}
