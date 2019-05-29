/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 16:44:43 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/29 12:01:49 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *x;
	char *y;

	if (n == 0 || dest == src)
		return (dest);
	x = (char *)dest;
	y = (char *)src;
	while (--n)
		*x++ = *y++;
	*x = *y;
	return (dest);
}

int		main()
{
	char src[35] = "lebza is coming to school again";
	char dest[18] = "hello world again";

	printf("%s", ft_memcpy(dest, src, 32));
	return (0);
}

