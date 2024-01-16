/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:14:50 by ncouton           #+#    #+#             */
/*   Updated: 2023/12/27 15:00:48 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int lettre)
{
	if (lettre >= 'a' && lettre <= 'z')
	{
		lettre = lettre + 32;
		return (lettre);
	}
	else
		return (lettre);
}
