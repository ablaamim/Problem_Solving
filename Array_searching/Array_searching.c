/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array_searching.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 19:14:45 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/14 19:21:50 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	intarray_debug(int *tab, int len)
{
	int	i;

	i = 0;
	printf("%c", '[');
	while (i < len - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("%d", tab[len - 1]);
	printf("%c", ']');
}

int		intarray_search(int *tab, int len, int n)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] == n)
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	int	tab[] = {0, 1, 2, 3};

	intarray_debug(tab, 4);
	printf("\n");
	printf("%d\n", intarray_search(tab, 4, 0));
	printf("%d\n", intarray_search(tab, 4, 42));
	
	return (EXIT_SUCCESS);
}
