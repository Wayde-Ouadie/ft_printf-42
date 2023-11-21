/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 09:16:32 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 18:20:14 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_recur(unsigned long nbr, int *size)
{
	char	hex;

	if (nbr)
	{
		ft_recur(nbr / 16, size);
		if (nbr % 16 < 10)
			hex = nbr % 16 + 48;
		else
			hex = (nbr % 16) - 10 + 'a';
		ft_putchar(hex, size);
	}
}

void	ft_putadress(unsigned long nbr, int *size)
{
	char	*add;

	add = "0x";
	if (nbr == 0)
	{
		ft_putstr(add, size);
		ft_putchar('0', size);
	}
	else
	{
		ft_putstr(add, size);
		ft_recur(nbr, size);
	}
}
