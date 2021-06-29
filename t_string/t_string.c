/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_string.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:11:31 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/29 16:16:11 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char c;
	char *str;
	char string[] = "123";
	str = "lol";
	c = '\0';
	printf("%d\n%s\n%c\n%s\n", c, str, *str, string);
	return (0);
}
