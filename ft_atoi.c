/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 09:14:04 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/24 08:02:53 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *str)
{
	int sign;
	int i;
	int nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while ((str[i] == ' ') || (str[i] == '\t')
			|| (str[i] == '\v') || (str[i] == '\n')
			|| (str[i] == '\r') || (str[i] == '\f'))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
		{
			sign = -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = 10 * nbr + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
