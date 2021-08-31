/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiplication_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 19:57:53 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/29 20:20:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	j;
	int	mult;

	i = 2;
	while (i <= 10)
	{
		j = 1;
		while (j <= 10)
		{
			mult = i * j;
			if (mult < 10)
				printf("  %d ", mult);
			else if (mult < 100)
				printf(" %d ", mult);
			else
				printf("%d ", mult);
			j++;
		}
		printf("\n");
		i++;
	}
	return (EXIT_SUCCESS);
}
