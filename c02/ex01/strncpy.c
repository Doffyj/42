/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.
  ▄   ▄
  █▀█▀█     * File_name : ft_strncpy.c
  █▄█▄█
   ███  ▄▄  * Creation Date : 2022/03/09 @ 22:21:38
   ████▐█ █
   ████   █ * Last Modified : 2022/03/09 @ 22:25:42
   ▀▀▀▀▀▀▀
* Code : xAthaz <xathaz@protonmail.com>  
	(ascii from fsymbols.com)
_._._._._._._._._._._._._._._._._._._._._._._.*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	m=0;
	do
	{
		dest[m] = src[m];
		m++;
	}while((n>m) && (src[m] != '\0'));
	do
	{
		dest[m] = src[m];
	}while(n>m);
	return (dest);
}
