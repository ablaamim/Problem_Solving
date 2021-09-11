/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_manipulation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:41:52 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/11 18:32:58 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct intarray intarray;

struct intarray 
{
	int *data;
	int len;
};

intarray intarray_create(int len)
{
	intarray	tab;

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

void	intarray_debug(intarray tab)
{
	int	i;

	i = 0;
	printf("%c", '[');
	while (i < tab.len - 1)
	{
		printf("%d, ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len - 1]);
	printf("%c", ']');
}

void	intarray_print_positive_value(intarray tab)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] >= 0)
			printf("%d", tab.data[i]);
		i++;
	}
}

int	intarray_search(intarray tab, int n)
{
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int intarray_nb_occurences(intarray tab, int n)
{
	int	i;
	int	nb_occurences;

	nb_occurences = 0;
	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] == n)
			nb_occurences++;
		i++;
	}
}

void	intarray_destroy(intarray tab)
{
	free(tab.data);
}

int	intarray_get(intarray tab, int index)
{
	if ((index < 0) || (index >= tab.len))
	{
		printf("\nERROR ");
		return (-1);
	}
	return(tab.data[index]);
}

void	intarray_set(intarray tab, int index, int value)
{
	if ((index < 0) || (index > tab.len))
	{
		printf("\nERROR");
		return ;
	}
	tab.data[index] = value;
}

int	intarray_length(intarray tab)
{
	return (tab.len);
}

intarray	intarray_concat(intarray T1, intarray T2)
{
	intarray T = intarray_create(T1.len + T2.len);
	int	j;
	int	i;

	j = 0;
	for (i = 0; i < T1.len; i++)
	{
		T.data[j] = T1.data[i];
		j++;
	}
	for (i = 0; i < T2.len; i++)
	{
		T.data[j] = T2.data[i];
		j++;
	}
	return (T);
}

int	intarray_get_min(intarray tab)
{
	int	min = tab.data[0];
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
		}
		i++;
	}
	return (min);
}

int	intarray_index_of_min(intarray tab)
{
	int	 min = tab.data[0];
	int	index_min = 0;
	int	i;

	i = 0;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min);
}

int	intarray_index_of_min_from(intarray tab, int n)
{
	int	min = tab.data[i];
	int	index_min = n;
	int i;

	i = n + 1;
	while (i < tab.len)
	{
		if (tab.data[i] < min)
		{
			min = tab.data[i];
			index_min = i;
		}
		i++;
	}
	return (index_min)
}

int	main(void)
{
	intarray	toto = intarray_create(6);
	intarray	titi = intarray_create(4);
	intarray	tutu;
	intarray_set(toto, 5, 13);
	intarray_set(toto, 3, 2);
	intarray_set(toto, 0, -1);
	intarray_set(titi, 2, 42);
	intarray_set(titi, 3, 1337);
	intarray_debug(toto);
	printf("\n");
	intarray_debug(titi);
	printf("\n");
	tutu = intarray_concat(toto, titi);
	intarray_debug(tutu);
	printf("\n");
	printf("%d\n", intarray_get_min(toto));
	printf("%d\n", intarray_index_of_min(toto));
	intarray_destroy(toto);
	intarray_destroy(titi);
	intarray_destroy(tutu);
	return (EXIT_SUCCESS);
}
