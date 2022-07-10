/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builder.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:22:15 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 17:55:43 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fourbuilds.h"
#include "onebuilds.h"

void	ft_nozeros(int arr[][4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if ((arr[i][j] > 4 || arr[i][j] <= 0) && k == 0)
			{
				arr[i][j] = 3;
				k++;
			}
			else if ((arr[i][j] > 4 || arr[i][j] <= 0) && k == 1)
			{
				arr[i][j] = 2;
				k--;
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void	ft_fillwithfive( char *str, int arr[][4])
{
	int	k;
	int	j;

	k = 0;
	j = 0;
	while (k < 4)
	{
		while (j < 4)
		{
			arr[k][j] = 5;
			j++;
		}
		j = 0;
		k++;
	}
}

void	ft_builder(char *str, int arr[][4])
{
	ft_fillwithfive(str, arr);
	ft_fourbuild(str, arr);
	ft_onebuild(str, arr);
	ft_nozeros(arr);	
}