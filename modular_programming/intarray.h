/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intarray.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:14:54 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/13 15:28:31 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct intarray intarray;

struct intarray
{
	int *data;
	int len;
};

intarray	intarray_create(int len);
void		intarray_destroy(intarray tab);
void		intarray_set(intarray tab, int index, int value);
void		intarray_debug(intarray tab);
void		intarray_print_positive_value(intarray tab);
int		intarray_search(intarray tab, int n);
int 		intarray_nb_occurences(intarray tab, int n);
int		intarray_get(intarray tab, int index);
intarray	intarray_concat(intarray T1, intarray T2);
int		intarray_index_of_min_from(intarray tab, int n);
int		intarray_index_of_min(intarray tab);
int		intarray_get_min(intarray tab);

