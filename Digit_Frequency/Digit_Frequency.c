/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Digit_Frequency.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 16:33:46 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/07 16:33:49 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str[1000];
    int nbr[10] = {0};
    scanf("%s", str);
    
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            nbr[str[i] - 48]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", nbr[i]);
    }
    return 0;
}