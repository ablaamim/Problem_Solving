/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ascii_to_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 03:50:22 by alaamimi          #+#    #+#             */
/*   Updated: 2021/09/15 04:04:23 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	Ascii_to_integer(char *str)
{
	int	res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] && (str[i] >= 7 && str[i] <= 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * sign);
}

int	main(int ac, char **av)
{
	char	str[] = "123";
	char	str1[] = "-111";
	char	str2[] = "11k1";
	char	str3[] = "";
	char	str4[] = "123\t5";

	printf("%d\n", Ascii_to_integer(str));
	printf("%d\n", atoi(str));
	printf("%d\n", Ascii_to_integer(str1));
	printf("%d\n", atoi(str1));
	printf("%d\n", Ascii_to_integer(str2));
	printf("%d\n", atoi(str2));
	printf("%d\n", Ascii_to_integer(str3));
	printf("%d\n", atoi(str3));
	printf("%d\n", Ascii_to_integer(str4));
	printf("%d\n", atoi(str4));
	return (EXIT_SUCCESS);
}
