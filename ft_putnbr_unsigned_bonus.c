/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:22:17 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/21 13:54:54 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_unsigned(unsigned int nbr, int *size)
{
	if (nbr > 9)
	{
		ft_putnbr_unsigned(nbr / 10, size);
		ft_putchar((nbr % 10) + 48, size);
	}
	else
		ft_putchar(nbr + 48, size);
}
