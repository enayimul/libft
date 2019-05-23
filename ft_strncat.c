/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:11:13 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/23 13:52:31 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		i++;
	}
	while ((s2[j]) && j < c)
	{
		s1[i] = s2[i];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
