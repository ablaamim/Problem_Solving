/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handshake.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:57:18 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 22:46:30 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

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
	int		t;
	int		n;

	scanf("%d", &t);
	while (t--)
	{
		scanf("%d", &n);
		if (n == 1)
		{
			ft_putnbr(0);
			write(1, "\n", 1);
		}
		else
		{
			n = n * (n - 1) / 2;
			ft_putnbr(n);
			write(1, "\n", 1);
		}
	}
	return (EXIT_SUCCESS);
}
