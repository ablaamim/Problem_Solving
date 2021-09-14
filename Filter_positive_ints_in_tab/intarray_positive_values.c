/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray_positive_values.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:57:51 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 19:06:32 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	intarray_debug(int *tab, int len)
{
	int	i;

	i = 0;
	printf("[");
	while (i < len - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[len - 1]);
	printf("]");
}


void	intarray_positive_values(int *tab, int len)
{
	int	i;
	i = 0;
	while (i < len)
	{
		if (tab[i] >= 0)
			printf("%d ", tab[i]);
		i++;
	}
}

int	main(void)
{
	int tab[] = {-42, 1337, -1337, 42, 19, -19};

	intarray_positive_values(tab, 6);
	printf("\n");
	intarray_debug(tab, 6);
	printf("\n");
	return (EXIT_SUCCESS);
}
