/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onebuilds.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsanch <jonsanch@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 17:39:34 by jonsanch          #+#    #+#             */
/*   Updated: 2022/07/09 17:55:29 by jonsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ONEBUILDS_H
#define ONEBUILDS_H

int		ft_top1build(char	*str, int arr[][4]);
int		ft_bot1build(char	*str, int arr[][4]);
int		ft_right1build(char	*str, int arr[][4]);
int		ft_left1build(char	*str, int arr[][4]);
void	ft_onebuild(char *str, int arr[][4]);

#endif