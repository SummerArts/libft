/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:06:58 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:57:53 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*dest1;
	unsigned char	*src1;
	size_t				i;

	i = 0;
	dest1 = (unsigned char *)dest;
	src1 = (unsigned char *)src;
	if (dest1 < src1)
	{
		while (size > 0)
		{
			dest1[size - 1] = src1[size - 1];
			size--;
		}
	}
	else
	{
		while (i < size)
		{
			dest1[i] = src1[i];
			i++;
		}	
	}
	return (dest);
}
