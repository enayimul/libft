/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 14:06:17 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/07 15:29:38 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*dst1;
	char	*src1;

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		if ((unsigned char)src1[i] == (unsigned char)c)
			return ((char *)dst + i + 1);
		i++;
	}
	return (NULL);
}
