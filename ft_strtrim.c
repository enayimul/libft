/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:23:18 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/25 10:17:01 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	j = ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	if (s[i] == '\0')
		return ("");
	while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
		j--;
	j++;
	if (!(str = (char *)malloc(sizeof(char) * (j - i + 1))))
		return (NULL);
	while (i < j)
	{
		str[k++] = s[i++];
	}
	str[k] = '\0';
	return (str);
}
