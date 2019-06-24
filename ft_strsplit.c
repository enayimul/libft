/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:34:16 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/24 15:57:40 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_num_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static size_t		ft_num_char(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * ft_num_words(s, c) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			str[j] = ft_strsub(s, i, ft_num_char(&s[i], c));
			j++;
			i = i + ft_num_char(&s[i], c);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	str[j] = NULL;
	return (str);
}
