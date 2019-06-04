/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:38:33 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/04 15:04:10 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;
	char *str;

	i = 0;
	j = 0;
	str =(char *)haystack;
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
