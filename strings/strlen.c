/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:59:13 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/28 16:04:45 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	mystrlen(char *string)
{
	int counter;

	counter = 0;
	while (string[counter] != 0)
	{
		counter++;
	}
	return (counter);
}

int	main(void)
{
	char string[] = "this is me";

	printf("%d\n", mystrlen(string));
	return (0);
}
