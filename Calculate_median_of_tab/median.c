/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 17:19:41 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 18:07:30 by alaamimi         ###   ########.fr       */
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

intarray	intarray_create(int len)
{
	int	i;
	intarray tab;

	i = 0;
	tab.len = len;
	tab.data = malloc (len * sizeof (int));
	while (i < tab.len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}

intarray	intarray_debug (intarray tab)
{
	int	i;

	i = 0;
	printf("[");
	while (i < tab.len - 1)
	{
		printf("%d, ", tab.data[i]);
		i++;
	}
	printf("%d", tab.data[tab.len - 1]);
	printf("]");
	return (tab);
}

void	intarray_destroy(intarray tab)
{
	free(tab.data);
}

void	intarray_set(intarray tab, int index, int value)
{
	if ((index < 0) || (index > tab.len))
		printf("ERROR\n-1\n");
	else
		tab.data[index] = value;
}

float	intarray_median_value(intarray tab)
{
	int	cmp1;
	int	cmp2;
	int	tmp;
	int	v1;
	int	v2;

	cmp1 = 0;
	v1 = tab.data[(tab.len - 1) / 2];
	v2 = tab.data[tab.len / 2];
	while (cmp1 < tab.len)
	{
		cmp2 = cmp1 + 1;
		while (cmp2 < tab.len)
		{
			if (tab.data[cmp2] < tab.data[cmp1])
			{
				tmp = tab.data[cmp1];
				tab.data[cmp1] = tab.data[cmp2];
				tab.data[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
	if (tab.len % 2 == 1)
		return (tab.data[(tab.len -1) / 2]);
	else
		return ((v1 + v2) / 2.0);
}

void	intarray_sort(intarray tab)
{
	int	cmp1;
	int	cmp2;
	int	tmp;

	cmp1 = 0;
	while (cmp1 < tab.len)
	{
		cmp2 = cmp1 + 1;
		while (cmp2 < tab.len)
		{
			if (tab.data[cmp2] < tab.data[cmp1])
			{
				tmp = tab.data[cmp1];
				tab.data[cmp1] = tab.data[cmp2];
				tab.data[cmp2] = tmp;
			}
			cmp2++;
		}
		cmp1++;
	}
}

int	main(void)
{
	intarray str = intarray_create(5);

	intarray_debug(str);
	printf("\n");

	intarray_set(str, 0, 5);
	intarray_set(str, 1, 7);
	intarray_set(str, 2, 1);
	intarray_set(str, 3, 2);
	intarray_set(str, 4, 8);

	intarray_debug(str);
	printf("\n");
	intarray_sort(str);
	intarray_debug(str);
	printf("\n");
	printf("%f\n", intarray_median_value(str));

	intarray_destroy(str);
	return (EXIT_SUCCESS);
}
