/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:53:09 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/13 15:24:12 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "intarray.h"

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
	printf("%d\n", intarray_index_of_min_from(toto, 2));
	intarray_destroy(toto);
	intarray_destroy(titi);
	intarray_destroy(tutu);
	return (EXIT_SUCCESS);
}
