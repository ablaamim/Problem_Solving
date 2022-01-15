/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for-loop-c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 07:07:27 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 07:26:17 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int main(int argc, char **argv) 
{
	(void)	argc;
	(void)	argv;
	int		a;
	int		b;
	int		x;

	scanf("%d\n%d", &a, &b);
	x = a;
	while (x <= b)
	{
		if (x <= 9)
		{
			if (x == 1)
				ft_putchar("one\n");
			else if (x == 2)
				ft_putchar("two\n");
			else if (x == 3)
				ft_putchar("three\n");
			else if (x == 4)
				ft_putchar("four\n");
			else if (x == 5)
				ft_putchar("five\n");
			else if (x == 6)
				ft_putchar("six\n");
			else if (x == 7)
				ft_putchar("seven\n");
			else if (x == 8)
				ft_putchar("eight\n");
			else if (x == 9)
				ft_putchar("nine\n"); 
		}
		else if (x > 9)
		{
			if (x % 2 == 0)
				ft_putchar("even\n");
			else
				ft_putchar("odd\n");
		}
		x++;
	}
	return (EXIT_SUCCESS);
}

