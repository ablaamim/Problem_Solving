/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 16:22:27 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/28 16:28:55 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	while((*dest++ = *src++) != '\0');
}

int	main(void)
{
	char dest[] = "lol";
	char src[] = "mdr";

	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
