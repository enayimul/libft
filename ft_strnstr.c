/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 10:12:22 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/18 11:33:16 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		j = 0;
		while (i < len && s1[i + j] == s2[j] && s2[j] != '\0')
		{
			if (s2[j + 1] == '\0' && i < len)
				return ((char *)s1 + i);
			j++;
			len--;
		}
		i++;
	}
	return (NULL);
}
