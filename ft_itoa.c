/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 09:31:47 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/24 11:23:15 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	level(int n)
{
	int		i;
	int		j;

	j = 0;
	i = 1;
	if (n < 0)
		n = -1 * n;
	if (n == 0)
		j++;
	else if (n != 0)
	{
		while (n / i != 0)
		{
			i = i * 10;
			j++;
		}
	}
	return (j);
}

char		*ft_itoa(int n)
{
	char	*num;
	int		i;
	int		neg;

	num = 0;
	neg = 0;
	if (n < 0)
		neg = 1;
	i = level(n);
	if (!(num = (char *)malloc(sizeof(char) * (i + 1 + neg))))
		return (0);
	if (n < 0)
	{
		n = -1 * n;
		i++;
		num[0] = '-';
	}
	num[i] = '\0';
	while (--i >= neg)
	{
		num[i] = '0' + (n % 10);
		n = (n - (n % 10)) / 10;
	}
	return (num);
}
