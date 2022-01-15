/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximum-draws.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 03:36:44 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 03:48:33 by ablaamim         ###   ########.fr       */
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
	int		t;
	int		n;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		ft_putnbr(n + 1);
		write(1, "\n", 1);
	}
	return (EXIT_SUCCESS);
}
