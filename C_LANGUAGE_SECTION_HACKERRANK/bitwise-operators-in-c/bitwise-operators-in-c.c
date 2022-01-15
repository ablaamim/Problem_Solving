/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitwise-operators-in-c.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 21:17:08 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 21:17:10 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	calculate_the_maximum(int n, int k)
{
    int i;
    int j;
    int max_and;
    int max_or;
    int max_xor;
    
    max_and = 0;
    max_or = 0;
    max_xor = 0;
    i = 1;
    while (i <= n)
    {
        j = i + 1;
        while (j <= n)
        {
            int x = i & j;
            int y = i | j;
            int z = i ^ j;
            if(x < k & x > max_and)
                 max_and = x;
            if(y < k & y > max_or)
                 max_or = y;
            if(z < k & z > max_xor)
                 max_xor = z;
            j++;       

        }
        i++;
    }
    printf("%d\n%d\n%d", max_and, max_or, max_xor);
}

int	main(int argc, char **argv)
{
    (void) 	argc;
    (void) 	argv;
    int		n;
    int		k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return (EXIT_SUCCESS);
}
