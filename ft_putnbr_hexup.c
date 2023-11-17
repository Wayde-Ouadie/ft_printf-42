/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 08:54:57 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 08:55:56 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_hexup(int nbr, int *size)
{
	char	hex;
	int		i;

	i = 0;
	if (nbr)
	{
		ft_putnbr_hexup(nbr / 16, size);
		if (nbr % 16 < 10)
			hex = nbr % 16 + 48;
		else
			hex = (nbr % 16) - 10 + 'A';
		ft_putchar(hex, size);
	}
}
