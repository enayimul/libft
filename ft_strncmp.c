/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:15:25 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/30 09:13:25 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (!n)
	{
		return (0);
	}
	while (s1[i] && (s1[i] == s2[i] && --n))
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
