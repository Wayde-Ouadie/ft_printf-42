/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 05:05:52 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 11:53:56 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *size)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr("(null)", size);
		return ;
	}
	while (str[i])
		ft_putchar(str[i++], size);
}
