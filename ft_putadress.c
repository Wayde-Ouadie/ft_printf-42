/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:16:32 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 09:34:55 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadress(unsigned int nbr, int *size)
{
	char	hex;

	hex = '0';
	if (nbr)
	{
		ft_putadress(nbr / 16, size);
		if (nbr % 16 < 10)
			hex = nbr % 16 + 48;
		else
			hex = (nbr % 16) - 10 + 'a';
		ft_putchar(hex, size);
	}
}
