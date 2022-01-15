/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditional-statements-in-c.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 03:17:49 by ablaamim          #+#    #+#             */
/*   Updated: 2022/01/15 03:26:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char **argv)
{
    (void)  argc;
    (void)  argv;
    int     n;
    
    scanf("%d", &n);
    if (n == 1)
        ft_putstr("one");
    else if (n == 2)
        ft_putstr("two");
    else if (n == 3)
        ft_putstr("three");
    else if (n == 4)
        ft_putstr("four");
      else if (n == 5)
        ft_putstr("five");
    else if (n == 6)
        ft_putstr("six");
    else if (n == 7)
        ft_putstr("seven");
    else if (n == 8)
        ft_putstr("eight");
    else if (n == 9)
        ft_putstr("nine");
    else
        ft_putstr("Greater than 9");
    return (EXIT_SUCCESS);
}