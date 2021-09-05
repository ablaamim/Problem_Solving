/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:15:21 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/05 23:07:05 by alaamimi         ###   ########.fr       */
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
	printf("]\n");

}

int	main(void)
{
	int	n;

	scanf("%d", &n);
	int	*str = malloc (n * sizeof (int));
	int	i;

	i = 0;
	while (i < n)
	{
		str[i] = 2 * i + 5;
		i++;
	}
	intarray_debug(str, n);
	free(str);
	return (EXIT_SUCCESS);
}
