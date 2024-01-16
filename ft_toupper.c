/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:06:09 by ncouton           #+#    #+#             */
/*   Updated: 2024/01/16 15:48:43 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int lettre)
{
	if (lettre >= 'a' && lettre <= 'z')
	{
		lettre = lettre - 32;
		return (lettre);
	}
	else
		return (lettre);
}
