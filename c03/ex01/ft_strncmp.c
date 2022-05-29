/**
 * File: .\ft_strncmp.c
 * Author: xAthaz <xathaz@protonmail.com>
 * Date: 29/05/2022 @ 15:04:59
 * Last Modified Date: 29/05/2022 @ 15:04:59
 * Last Modified By: xAthaz <xathaz@protonmail.com>
 */
/* ************************************************************************** */
/*                                                                            */
/*                                                  ▄   ▄                 */
/*   ft_strncmp.c                                           █▀█▀█   */
/*                                                  █▄█▄█           */
/*   By: xAthaz <xathaz@protonmail.com>              ███  ▄▄        */
/*                                                   ████▐█ █   */
/*   Created: 2022/03/20 @ 17:00:57 by xAthaz        ████   █       */
/*   Updated: 2022/03/20 @ 17:21:47 by xAthaz        ▀▀▀▀▀▀▀    */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int 	m;
    int 	i;

    m = 0;
    i = 0;
    while(m<n && s1[m] != '\0' && s2[m] != '\0')
    {
	i = s1[m] - s2[m]:
	m++;
	if(i > 0)
	    break;
    }
    if(m<n && i != 0 && (s1[m] !='\0' || s2[m] != '\0))
	i = s1[m] - s2[m]
    return (i);
}
