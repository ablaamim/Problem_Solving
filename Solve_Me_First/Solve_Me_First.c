/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Solve_Me_First.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 10:54:02 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 10:54:12 by Alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int solveMeFirst(int a, int b)
{
    int sum;
    
    sum = a + b;
    return (sum);
}

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum; 
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    return 0;
}
