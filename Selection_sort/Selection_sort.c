/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:19:14 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/12 16:11:14 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct intarray intarray;

struct intarray
{
	int	*data;
	int	len;
};

int	intarray_indice_min_from(intarray tab, int n)
{
	int	min = tab.data[n];
	int	index_min = n;
	int	i;

	i = n + 1;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min =tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}

void	intarray_debug(intarray tab)
{
	int i;

	i = 0;
	printf("%c", '[');
	while (i < tab.len - 1)
	{
		printf("%d, ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len -1]);
	printf("%c", ']');
}

void	intarray_set(intarray tab, int index, int value)
{
	if ((index < 0) || index >= tab.len)
	{
		printf("\nERROR");
		return ;
	}
	tab.data[index] = value;
}

intarray intarray_create(int len)
{
	intarray tab;

	tab.len = len;
	tab.data = malloc (len * sizeof (int));
	int	i;

	i = 0;
	while (i < len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}

void	intarray_selection_sort(intarray tab)
{
	int	i;
	int tmp;

	i = 0;
	while (i < tab.len - 1)
	{
		int	indice_min = intarray_indice_min_from(tab, i);
		tmp = tab.data[i];
		tab.data[i] = tab.data[indice_min];
		tab.data[indice_min] = tmp;
		i++;
	}
}

void	intarray_destroy(intarray tab)
{
	free(tab.data);
}

int	main(void)
{
	intarray toto = intarray_create(5);

	intarray_set(toto, 0, -1);
	intarray_set(toto, 1, 2);
	intarray_set(toto, 2, 0);
	intarray_set(toto, 3, 3);
	intarray_set(toto, 4, 1337);
	intarray_debug(toto);
	printf("\n");
	intarray_selection_sort(toto);
	intarray_debug(toto);
	printf("\n");
	intarray_destroy(toto);
	return (EXIT_SUCCESS);
}
