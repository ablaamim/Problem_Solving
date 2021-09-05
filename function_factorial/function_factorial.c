/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_factorial.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:04:48 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/05 17:30:28 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

// n! = n * (n - 1) * (n - 2) * ... * 1

int	fact(int n)
{
	int	i;
	int	fact;

	fact = 1;
	i = 1;
	if (n == 0 || n == 1)
		return (1);
	else if (n >= 1 && n <= 12)
	{
		while (i <= n)
		{
			fact *= i;
			i++;
		}
	}
	else
		return (-1);
	return (fact);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int	n;

	scanf("%d", &n);
	printf("%d\n", fact(n));
	return (EXIT_SUCCESS);
}
