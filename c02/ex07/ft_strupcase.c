/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strupcase.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/10 @ 22:45:53
   ████▐█ █
   ████   █ * Last Modified : 2022/03/10 @ 22:54:32
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	do
	{
		if(str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}while(str[i] != '\0');
	return(str);
}
