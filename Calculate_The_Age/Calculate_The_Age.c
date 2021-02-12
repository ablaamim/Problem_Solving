/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculate_The_Age.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 18:37:49 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/12 18:43:17 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int age;
	int birthDay;

	printf("What is the year of your birth ? \n");
	scanf("%d", &birthDay);

	age = 2021 - birthDay;
	printf("You are %d years old, this year!\n", age);
	return (0);
}
