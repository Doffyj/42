/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strcpy.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/09 @ 22:12:15
   ████▐█ █
   ████   █ * Last Modified :
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	do
	{
		dest[i] = src[i];
		i++;
	}while(src[i] != '\0');

	return(dest);
}
