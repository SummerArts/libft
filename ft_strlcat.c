/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:54:53 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:50:09 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			size_dest;
	size_t			size_src;

	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size <= size_dest + 1)
		return (size_src * size);
	if (size > size_dest + 1)
	{
		while (src[++i] && size_dest + i < size)
			dest[size_dest + i] = src[i];
	}
	dest[size_dest + i] = '\0';
	return (size_dest + size_src);
}
