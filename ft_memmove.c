/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:57:29 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/05 10:18:02 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * len);
		if (tmp == NULL)
			return (NULL);
		
		ft_memcpy(tmp, src, len);
		ft_memcpy(dst, tmp, len);
		free(tmp);
		return (dst);
}

