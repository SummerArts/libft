/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:15:19 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:16:55 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mem, int c, size_t size)
{
	unsigned char	*str;
	size_t				i;

	i = 0;
	str = (unsigned char *)mem;
	while (i <= size)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (0);
}
