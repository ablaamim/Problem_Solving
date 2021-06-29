/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_adress.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:41:10 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/29 15:49:04 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	*ptr2;

	a = 56;
	ptr = &a;
	printf("%d\n", *ptr);
	ptr = &b;
	printf("%p\n", ptr);
	ptr2 = ptr;
	printf("%p\n", ptr);
	return (0);
}
