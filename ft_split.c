/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 15:05:10 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:33:04 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	i;
	int	words;

	words = 0;
	if (ft_strlen(s) == 0)
		return (0);
	if (s[0] != c)
		words++;
	i = 1;
	while (s[i])
	{
		if ((s[i] != c) && (s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	*ft_free(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free(s);
	return (0);
}

static int	ft_size(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		start;

	start = 0;
	if (s == NULL || ft_strlen(s) == 0)
		return (0);
	dest = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (dest == 0)
		return (0);
	i = 0;
	while (i < ft_count(s, c) + 1 && start < (int)ft_strlen(s))
	{
		dest[i] = ft_substr(s, start, ft_size(s, c, start));
		if (dest[i] == 0)
			ft_free(dest, i);
		start += ft_size(s, c, start);
		while (s[start] == c)
			start++;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
