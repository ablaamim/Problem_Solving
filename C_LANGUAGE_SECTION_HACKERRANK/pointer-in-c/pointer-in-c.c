/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer-in-c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 01:08:54 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 01:20:39 by ablaamim         ###   ########.fr       */
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

void	ft_update(int *a, int *b)
{
	int	add;
	int	diff;

	add = *a + *b;
	if (*a < *b)
	{
		diff = *a - *b;
		*b = -diff;
	}
	else
	{
		diff = *a - *b;
		*b = diff;
	}
	*a = add;
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		a;
	int		b;
	int		*pa;
	int		*pb;

	pa = &a;
	pb = &b;
	scanf("%d %d", &a, &b);
	ft_update(pa, pb);
	ft_putnbr(a);
	write(1, "\n", 1);
	ft_putnbr(b);
	return (EXIT_SUCCESS);
}
