/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules_ii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 23:16:32 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/06 14:44:25 by alaamimi         ###   ########.fr       */
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

void	intarray_print_positive_values(int *tab, int len)
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

int	intarray_search(int *tab, int len, int n)
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
	int	n;

	scanf("%d", &n);
	int	*str = malloc (n * sizeof(int));
	int	i;

	i = 0;
	while (i < n)
	{
		scanf("%d", &str[i]);
		i++;
	}
	intarray_debug(str, n);
	printf("\n");
	intarray_print_positive_values(str, n);
	printf("\n");
	if (intarray_search(str, n, 20) == 1)
		printf("n is an element in the array.\n");
	else
		printf("n is not an element in this arrayy.\n");
	free(str);
	return (EXIT_SUCCESS);
}
