/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:16:35 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:25:32 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t size)
{
	unsigned char	*pointer1;
	unsigned char	*pointer2;
	size_t			i;

	i = 0;
	pointer1 = (unsigned char *)p1;
	pointer2 = (unsigned char *)p2;
	while (i < size)
	{
		if (pointer1[i] != pointer2[i])
			return ((int)pointer1[i] - (int)pointer2[i]);
		i++;
	}
	return (0);
}
