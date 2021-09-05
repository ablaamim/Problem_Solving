/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asserts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:46:56 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/05 19:56:33 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int	fact(int nb)
{
	assert ((nb >= 0) && (nb <= 12));
	{
		int i;
		int fact;

		i = 1;
		fact = 1;
		while (i <= nb)
		{
			fact *= i;
			i++;
		}
		return (fact);
	}
}

int	main(void)
{
	printf("%d\n", fact(13));
	return (EXIT_SUCCESS);
}
