/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:06:27 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/28 16:17:42 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;
	unsigned char *j;

	i = 0;
	if (n == 0)
		return (b);

	j = b;
	while (i < n)
	{
		j[i] = (unsigned char)c;
		i++;
	}
	return (j);
}
