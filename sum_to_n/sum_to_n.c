/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_to_n.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 16:06:05 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/01 16:10:56 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	sum_to_n(int n)
{
	return ((n * (n + 1)) / 2);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int	n;

	scanf("%d", &n);
	printf("%d\n", sum_to_n(n));
	return (EXIT_SUCCESS);
}
