/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:47:21 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/12 19:06:50 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float width;
	float length;
	float area;
	float perimeter;

	printf("Please enter the length of rectangle : \n");
	scanf("%f", &length);
	printf("Please enter the width of rectangle : \n");
	scanf("%f", &width);
	perimeter = (length + width) * 2;
	area = length * width;
	printf("The perimeter of Rectangle is equal to %.2f\n", perimeter);
	printf("The area of Rectangle is equal to %.2f\n", area);
	return (0);
}
