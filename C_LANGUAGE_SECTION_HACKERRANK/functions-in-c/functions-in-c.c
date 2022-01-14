/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions-in-c.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:45:51 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 00:19:12 by ablaamim         ###   ########.fr       */
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

int	ft_max_of_four(int a, int b, int c, int d)
{
	int	max;

	max = a;
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	if (d > max)
		max = d;
	return (max);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;

	int	a;
	int	b;
	int	c;
	int	d;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	int	answer = ft_max_of_four(a, b, c, d);
	ft_putnbr(answer);
	return (EXIT_SUCCESS);
}
