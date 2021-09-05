/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modules.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 21:44:38 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/05 22:13:00 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
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

int	main(void)
{
	int tab[] = {-8, 48, 42, -100, 1337};

	intarray_debug(tab, 5);
	return (EXIT_SUCCESS);
}
