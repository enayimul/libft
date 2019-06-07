/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:11:13 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/29 10:11:00 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*i;

	i = s1;
	while (*i != '\0')
	{
		i++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*i = *s2;
		i++;
		s2++;
		n--;
	}
	*i = '\0';
	return (s1);
}
