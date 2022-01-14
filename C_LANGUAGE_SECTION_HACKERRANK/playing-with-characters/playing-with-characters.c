/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Playing_With_Characters.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 21:17:42 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/14 21:48:41 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define MAX 100

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	ch;
	char	str[100];
	char	sen[100];

	scanf("%c", &ch);
	ft_putchar(ch);
	ft_putchar('\n');
	scanf("%s", str);
	ft_putstr(str);
	ft_putchar('\n');
	scanf("\n");
	fgets(sen, MAX, stdin);
	ft_putstr(sen);
	return (EXIT_SUCCESS);
}
