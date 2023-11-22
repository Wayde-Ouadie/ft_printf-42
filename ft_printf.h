/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:33:50 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/17 09:23:51 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *size);
void	ft_putstr(char *str, int *size);
void	ft_putnbr(int nbr, int *size);
void	ft_putnbr_unsigned(unsigned int nbr, int *size);
void	ft_puthexlow(int nbr, int *size);
void	ft_puthexup(int nbr, int *size);
void	ft_putadress(unsigned int nbr, int *size);

#endif