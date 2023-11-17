/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:35:47 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 09:38:04 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	int		size;
	int		i;
	va_list	args;

	if (write(1, "", 0) == -1)
		return (-1);
	size = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
			{
				if (format[i] == 'c')
					ft_putchar(va_arg(args, int), &size);
				else if (format[i] == 's')
					ft_putstr(va_arg(args, char *), &size);
				else if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr(va_arg(args, int), &size);
				else if (format[i] == 'u')
					ft_putnbr_unsigned(va_arg(args, unsigned int), &size);
				else if (format[i] == 'x')
					ft_puthexlow(va_arg(args, unsigned int), &size);
				else if (format[i] == 'X')
					ft_puthexup(va_arg(args, unsigned int), &size);
				else if (format[i] == 'p')
				{
					ft_putstr("0x", &size);
					ft_putadress(va_arg(args, unsigned int), &size);
				}
				else if (format[i] == '%')
					ft_putchar('%', &size);
			}
		}
		else
			ft_putchar(format[i], &size);
		i++;
	}
	return (size);
}

int	main(void)
{
	ft_printf("[%d]", ft_printf("mine-[%p]--[%p]--[%p]-", -42, 0, 42));
	printf("\n");
	printf("[%d]", printf("macs-[%p]--[%p]--[%p]-", -42, 0, 42));
}
