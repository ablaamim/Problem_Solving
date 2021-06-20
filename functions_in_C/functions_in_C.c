/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions_in_C.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:39:38 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/20 21:41:22 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	max_of_four(int a, int b, int c, int d)
{
	int	max;

	max = a;
	if (b >= max)
	max = b;
	if (c >= max)
	max = c;
	if (d >= max)
	max = d;
	return (max);
}

int	main()
{
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d);
	printf("%d", ans);
	return (EXIT_SUCCESS);
}
