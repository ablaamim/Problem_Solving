/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playing_with_characters.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/20 21:04:54 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/20 21:06:24 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int	BUFFER_SIZE = 256;
	char	ch;
	char	s[BUFFER_SIZE];
	char	sen[BUFFER_SIZE];

	scanf("%c", &ch);
	scanf("%s", s);
	scanf("\n");
	fgets(sen, BUFFER_SIZE, stdin);

	printf("%c\n", ch);
	printf("%s\n", s);
	printf("%s\n", sen);
	return (EXIT_SUCCESS);
}
