/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:16:04 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/21 13:54:50 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr, int *size)
{
	long	n;

	n = nbr;
	if (n < 0)
	{
		ft_putchar('-', size);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, size);
		ft_putchar((n % 10) + 48, size);
	}
	else
		ft_putchar(n + 48, size);
}
