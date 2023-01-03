/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   army-game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 00:32:18 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/16 00:34:53 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		n;
	int		m;

	scanf("%d %d", &m, &n);
	if (n <= 2 && m <= 2)
		ft_putnbr(1);
	else
		ft_putnbr(((n % 2) + n) * ((m % 2) + m) /4);
	return (EXIT_SUCCESS);
}
