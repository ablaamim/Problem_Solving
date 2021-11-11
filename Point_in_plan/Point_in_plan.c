/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point_in_plan.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <ablaamim@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:44:27 by ablaamim          #+#    #+#             */
/*   Updated: 2021/09/17 17:33:19 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

typedef struct point point;

struct point
{
	float	x;
	float	y;
};

void	point_debug(point	*p)
{
	printf("(%f, %f)", p->x, p->y);
}

/*point	point_create(float x, float y)
{
	point	p;
	p.x = x;
	p.y = y;
	return (p);
}*/

point	*point_create_dynamic(float x, float y)
{
	point *p = malloc(sizeof(struct point));
	p->x = x;
	p->y = y;
	return (p);
}

void	double_x(point *p)
{
	p->x *= 2;
}

void	double_y(point *p)
{
	p->y *=2;
}

void	restore_values(point *p)
{
	p->x /= 2;
	p->y /= 2;
}

int	main(void)
{
	point *toto = point_create_dynamic(4.0, 10.0);
	point_debug(toto);
	printf("\n");
	point_debug(toto);
	printf("\n");
	double_x(toto);
	double_y(toto);
	point_debug(toto);
	printf("\n");
	restore_values(toto);
	free(toto);
	return (EXIT_SUCCESS);
}
