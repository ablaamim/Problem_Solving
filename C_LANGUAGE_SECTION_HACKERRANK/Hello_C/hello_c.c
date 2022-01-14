/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:50:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/14 21:09:31 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define MAX 100

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str[MAX];

	fgets(str, MAX, stdin);
	ft_putstr("Hello, World!\n");
	ft_putstr(str);
	return (EXIT_SUCCESS);
}
