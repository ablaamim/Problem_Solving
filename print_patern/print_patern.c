/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_patern.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:44:35 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/25 13:01:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		index;
	int		index1;

	index = 1;
	while (index++ <= 20)
	{
		index1 = 1;
		while (index1++ <= 20)
		{
			printf("#");
		}
		printf("\n");
	}
	return (0);
}
