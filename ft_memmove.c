/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:57:29 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/10 16:40:43 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src1;
	unsigned char	*dst1;

	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	if (len == 0)
		return (dst);
	if (dst > src)
	{
		while (len--)
		{
			dst1[len] = src1[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
