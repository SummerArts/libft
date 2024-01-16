/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:18:14 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:36:56 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int searchedChar)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)searchedChar)
			return (&((char *)str)[i]);
		i++;
	}
	return (0);
}
