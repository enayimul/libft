/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enayimul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 08:56:43 by enayimul          #+#    #+#             */
/*   Updated: 2019/06/10 16:58:24 by enayimul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;

	if ((dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (ft_strcpy(dest, s1));
	return (NULL);
}
