/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sum_of_difference.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:25:32 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/20 21:28:56 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a;
	int b;
	float	d;
	float	c;
	int sum_int;
	int diff_int;
	float sum_float;
	float diff_float;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c, &d);
	sum_int = a + b;
	diff_int = a - b;
	sum_float = c + d;
	diff_float = c - d;

	printf("%d ", sum_int);
	printf("%d\n", diff_int);
	printf("%.1f ", sum_float);
	printf("%.1f\n", diff_float);
	return (EXIT_SUCCESS);
}
