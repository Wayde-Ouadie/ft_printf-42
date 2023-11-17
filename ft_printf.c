/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:35:47 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 08:42:10 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
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
					ft_putnbr_hexlow(va_arg(args, int), &size);
					return (0);
			}
		}
		else
			ft_putchar(format[i], &size);
		i++;
	}
	return (0);
}

#include <limits.h>
#include <stdio.h>
int main(void)
{
	// char c = 'a';
	// int i = 100;
	// long j = -214;
	// char *s = "hello";
	// ft_printf("\n%i%c%s%u", j, c, s, i);
	ft_printf("hello");
	// printf("\n%i",printf("\n%i%c%s%u", j, c, s, i));
}