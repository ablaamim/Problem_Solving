/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimum-height-triangle.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:09:36 by ablaamim          #+#    #+#             */
/*   Updated: 2022/02/17 18:14:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	putnbr(int n)
{
	if (n > 9)
		putnbr(n / 10);
	write(1, &"0123456789"[n % 10], 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int	a;
	int	b;
	int	h;

	scanf("%d %d", &b, &a);
	h = (((a * 2) + (b - 1)) / b);
	putnbr(h);
	return (EXIT_SUCCESS);
}
