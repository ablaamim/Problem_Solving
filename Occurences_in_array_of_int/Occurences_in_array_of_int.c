/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Occurences_in_array_of_int.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:34:27 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 19:41:57 by alaamimi         ###   ########.fr       */
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
	printf("%d", tab[len -1]);
	printf("]");
}

int		intarray_nb_occurences(int *tab, int len, int n)
{
	int	i;
	int	occurences;

	occurences = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] == n)
			occurences++;
		i++;
	}
	return(occurences);
}

int	main(void)
{
	int	tab[] = {1337, 42, 19, 101, 42, 42, 19, -1};
	intarray_debug(tab, 8);
	printf("\n");
	printf("%d\n", intarray_nb_occurences(tab, 8, 42));
	return (EXIT_SUCCESS);
}
