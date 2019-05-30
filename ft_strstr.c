/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:38:33 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/29 16:57:06 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)str);
	while (haystack[i])
	{
		while (haystack[i] == needle[j] || needle[j] =='\0')
			{
				i++;
				j++;
				if (needle[j] =='\0')
					return ((char *)&str[i - j]);
			}
		i++;
	}
	return (NULL);
}
