/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:42:49 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 09:20:13 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexlow(int nbr, int *size)
{
	char	hex;

	if (nbr)
	{
		ft_puthexlow(nbr / 16, size);
		if (nbr % 16 < 10)
			hex = nbr % 16 + 48;
		else
			hex = (nbr % 16) - 10 + 'a';
		ft_putchar(hex, size);
	}
}
