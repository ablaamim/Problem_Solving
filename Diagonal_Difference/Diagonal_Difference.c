/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Diagonal_Difference.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alaamimi <Alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:18:14 by Alaamimi          #+#    #+#             */
/*   Updated: 2021/02/09 12:18:17 by Alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    
    int principaleDiagonal = 0;
    for (int i = 0; i < n; i++)
        principaleDiagonal += matrix[i][i];
    
    int secondaryDiagonal = 0;
    for (int i =0; i < n; i++)
        secondaryDiagonal += matrix[i][n - i - 1];
        
    int diff = principaleDiagonal - secondaryDiagonal;
    diff = abs(diff);
    printf("%d", diff);
    return 0;
}