/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_factorial.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:15:23 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/01 16:39:26 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	n_factorial(int n)
{
	int	i;
	int	fact;

	i = 1;
	fact = 1;
	if ( n >= 0 && n <= 12)
	{
		while (i <= n && n >= 0)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
	else
		return(-1);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int	n;

	scanf("%d", &n);
	printf("%d\n", n_factorial(n));
	return (EXIT_SUCCESS);
}
