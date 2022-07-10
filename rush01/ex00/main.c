/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 11:06:05 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 12:59:42 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_errorcheck(char *argv);

int	main(int argc, char *argv[])
{
	if (argc != 2)
		printf("Errora %d", argc);
	else
		ft_errorcheck(*argv);
	return (0);
}
