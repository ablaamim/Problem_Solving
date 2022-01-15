/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find-the-point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 02:00:45 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 03:03:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		n;
	int		px;
	int		py;
	int		qx;
	int		qy;
	int		rx;
	int		ry;

	scanf("%d", &n);
	while (n--)
	{
		scanf("%d %d %d %d", &px, &py, &qx, &qy);
		rx = 2 * px - qx;
		ry = 2 * py - qy;
		printf("%d %d", rx, ry);
	}
	return (EXIT_SUCCESS);
}
