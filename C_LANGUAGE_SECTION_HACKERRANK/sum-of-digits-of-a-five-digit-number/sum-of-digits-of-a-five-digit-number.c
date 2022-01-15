/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum-of-digits-of-a-five-digit-number.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:52:15 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 18:21:10 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

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
	write(1,&"0123456789"[nbr % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		j;
	int		sum;
	int		i;

	sum = 0;
	j = 0;
	scanf("%d", &i);
	while (j < 5)
	{
		sum += i % 10;
		i = i / 10;
		ft_putnbr(sum);
		write(1, "\n", 1);
		j++;
	}
	return (EXIT_SUCCESS);
}
