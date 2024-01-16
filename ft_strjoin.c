/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:58:27 by ncouton           #+#    #+#             */
/*   Updated: 2023/12/27 15:04:39 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*chain;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) + ft_strlen(s2);
	chain = malloc(sizeof(char) * i + 1);
	if (chain == 0)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
	{
		chain[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2))
	{
		chain[i++] = s2[j];
		j++;
	}
	chain[i] = '\0';
	return (chain);
}
