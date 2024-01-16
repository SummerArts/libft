/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:43:29 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:02:34 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	if (!s2[i])
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		y = 0;
		while (s1[i + y] == s2[y] && i + y < len)
		{
			if (s2[y + 1] == '\0')
				return ((char *)s1 + i);
			y++;
		}
		i++;
	}
	return (0);
}
