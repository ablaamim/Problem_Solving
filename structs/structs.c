/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 15:56:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/09 16:27:27 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef	struct s_point point;

struct	s_point
{
	float	x;
	float	y;
};

void	point_debug(point a)
{
	printf("(%f, %f)", a.x, a.y);
}

point	point_constructor(float x, float y)
{
	point p;

	p.x = x;
	p.y = y;
	return (p);
}

int	main(void)
{
	point	p = point_constructor(12.0, -3.0);

	point_debug(p);
	printf("\n");
	return (EXIT_SUCCESS);
}
