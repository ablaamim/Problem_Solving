/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 16:27:39 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/06 16:50:35 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[10];
	gets(str);
	if (str[8] == 'A')
	{
		if (str[0] == '1' && str[1] == '2')
		{
			str[0] = '0';
			str[1] = '0';
		}
	}
	if (str[8] == 'P')
	{
		if (str[0]== '0' || str[1] != '2')
		{
			str[0]++;
			str[1] += 2;
		}
	}
	str[8] = '\0';
	puts(str);
	return (EXIT_SUCCESS);
}
