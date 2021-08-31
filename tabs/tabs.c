/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tabs.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 16:47:41 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/31 17:07:46 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int	i;
	int	tab[10];

	i = 0;
	while (i < 10)
	{
		printf("Enter the int number %d :", i + 1);
		scanf("%d", &(tab[i]));
		printf("\n");
		i++;
	}
	printf("Int typed in ascending order:\n");
	int	j;

	j = 0;
	while (j < 10)
	{
		printf("You have Typed %d.\n", tab[j]);
		j++;
	}
	printf("Int typed in reversed order:\n");
	int	index;

	index = 9;
	while (index >= 0)
	{
		printf("You haved typed %d.\n", tab[index]);
		index--;
	}
	return (EXIT_SUCCESS);
}
