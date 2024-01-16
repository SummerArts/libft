/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:44:41 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:18:46 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	start(const char *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			i++;
			j = 0;
		}
		else
			j++;
	}
	return (i);
}

int	end(const char *s1, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s1) - 1;
	while (set[i])
	{
		if (s1[len] == set[i])
		{
			len--;
			i = 0;
		}
		else
			i++;
	}
	return (len + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*s2;
	int		a;
	int		z;

	if (s1 == NULL)
		return (0);
	if (set == NULL)
		return (ft_strdup(s1));
	s2 = (char *)s1;
	a = start(s1, set);
	z = end(s1, set);
	if (a > z)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof (char) * (z - a + 1));
	if (str == NULL)
		return (0);
	ft_strlcpy(str, s2 + a, z - a + 1);
	return (str);
}
