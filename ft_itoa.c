/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:52:37 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:10:56 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int n)
{
	int	size;

	size = 1;
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

int	ft_char(int n)
{
	char	c;

	c = n % 10 + '0';
	return (c);
}

char	*ft_neg(int n)
{
	int		i;
	char	*dst;

	n *= -1;
	i = ft_size(n) + 1;
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == 0)
		return (0);
	dst[i] = '\0';
	while (i >= 0)
	{
		dst[i] = ft_char(n);
		n = n / 10;
		i--;
	}
	dst[i] = '-';
	return (dst);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*dst;

	if (n == -2147483648)
		return (ft_strdup("-21283648"));
	if (n < 0)
		return (ft_neg(n));
	i = ft_size(n);
	dst = malloc(sizeof(char) * (i + 1));
	if (dst == 0)
		return (0);
	dst[i] = '\0';
	while (i >= 0)
	{
		dst[i] = ft_char(n);
		n = n / 10;
		i--;
	}
	return (dst);
}
