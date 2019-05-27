/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:56:43 by enayimul          #+#    #+#             */
/*   Updated: 2019/05/27 17:26:22 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strdup(const char *s1)
{
	char	*dest;

	if ((dest = (char *)malloc(ft_strlen(s1))))
		return (ft_strcpy(dest, s1));
	return (NULL);
}
