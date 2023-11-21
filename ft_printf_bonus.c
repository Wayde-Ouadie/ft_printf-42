/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 20:35:47 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/21 16:36:38 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
 
static void	ft_flags_check(va_list args, const char format, const char next, int *size)
{
	if (format == '#')
	{
		if (next == 'x')
			ft_putstr("0x", size);
		else if (next == 'X')
			ft_putstr("0X", size);
	}
	else if (format == '+')
	{
		if (next == 'i' || next == 'd')
		{
			if (args >= 0)
				ft_putchar(43, size);
		}
	}
	else if (format == ' ')
	{
		if (next == 'i' || next == 'd')
		{
			if (args >= 0)
				ft_putchar(32, size);
		}
	}
}

static void	ft_recognition(va_list args, const char format, int *size)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int), size);
	else if (format == 's')
		ft_putstr(va_arg(args, char *), size);
	else if (format == 'd' || format == 'i')
		ft_putnbr(va_arg(args, int), size);
	else if (format == 'u')
		ft_putnbr_unsigned(va_arg(args, unsigned int), size);
	else if (format == 'x')
		ft_puthexlow(va_arg(args, unsigned int), size);
	else if (format == 'X')
		ft_puthexup(va_arg(args, unsigned int), size);
	else if (format == 'p')
		ft_putadress(va_arg(args, unsigned long), size);
	else
		ft_putchar(format, size);
}

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
			if (format[++i] == '\0')
				break ;
			ft_flags_check(args, format[i], format[i+1], &size);
			ft_recognition(args, format[++i], &size);
		}
		else
			ft_putchar(format[i], &size);
		i++;
	}
	va_end(args);
	return (size);
}
