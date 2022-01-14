/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum-numbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:19:16 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/14 23:13:09 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int n)
{
	long	nbr;

	nbr = (long) n;
	if (nbr < 0)
	{
		nbr = -nbr;
		write(1, "-", 1);
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		i1;
	int		i2;
	float	f1;
	float	f2;

	scanf("%d", &i1);
	scanf("%d", &i2);
	ft_putnbr(i1 + i2);
	write(1, " ", 1);
	ft_putnbr(i1 - i2);
	scanf("%f", &f1);
	scanf("%f", &f2);
	printf("%.1f ", f1 + f2);
	printf("%.1f", f1 - f2);
	return (EXIT_SUCCESS);
}
