/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:38:53 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/09 16:52:29 by alaamimi         ###   ########.fr       */
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
	int i;
	intarray tab;
	tab.len = len;
	tab.data = malloc (len * sizeof (int));
	i = 0;
	while (i < len)
	{
		tab.data[i] = 0;
		i++;
	}
	return (tab);
}

void	intarray_debug(int *tab, int len)
{
	int	i;

	i = 0;
	printf("%c", '[');
	while (i < len -1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[len -1]);
	printf("%c", ']');
}

int	main(void)
{
	intarray toto = intarray_create(8);
	intarray_debug(toto.data, 8);
	free(toto.data);
	return (EXIT_SUCCESS);
}
