/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 07:18:39 by oel-feng          #+#    #+#             */
/*   Updated: 2024/01/19 07:23:00 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <libc.h>
#include <pthread.h>

void	*routine1(void)
{
	usleep(1);
	fclose(stdout);
	fprintf(stderr, "%d\n", ft_printf("test\n"));
	return (NULL);
}

void	*routine2(void)
{
	fprintf(stderr, "%d\n", ft_printf("test\n"));
	return (NULL);
}

int	main(void)
{
	pthread_t	p1;
	pthread_t	p2;

	if (pthread_create(&p1, NULL, &routine1, NULL) != 0)
		return (1);
	if (pthread_create(&p1, NULL, &routine2, NULL) != 0)
		return (1);
	if (pthread_join(p1, NULL))
		return (1);
	if (pthread_join(p2, NULL))
		return (1);
	return (0);
}
