/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 13:27:06 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/21 13:28:50 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void update(int *a,int *b)
{
	int	diff;
	int	addition;

	addition = *a + *b;
	diff = abs(*a - *b);
	printf("%d\n%d", addition, diff);
}

int main() {
	int	a;
	int	b;
	int	*pa;
	int *pb;

	*pa = &a;
	*pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	return EXIT_SUCCESS;
}
