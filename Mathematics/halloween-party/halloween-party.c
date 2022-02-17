/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   halloween.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:16:17 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/17 18:26:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	putnbr(long nb)
{
	if (nb > 9)
		putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	long k;
	long i;

	scanf("%ld", &k);
	while (k--)
	{
		scanf("%ld\n", &i);
		putnbr(((i  / 2) * ((i + 1) / 2)));
		write(1, "\n", 1);
	}
	return (EXIT_SUCCESS);
}
