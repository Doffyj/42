/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strcmp.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/19 @ 23:43:34
   ████▐█ █
   ████   █ * Last Modified : 2022/03/19 @ 23:47:12
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	do{
		i++;
	}while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0');
	return (s1[c] - s2[c]);
}
