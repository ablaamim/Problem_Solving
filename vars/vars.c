/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:13:36 by alaamimi          #+#    #+#             */
/*   Updated: 2021/06/21 12:50:32 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	toto;
	char *titi;
	float tutu;
	
	titi = "Simple Calculations";
	toto = 42;
	tutu = 42;
	printf("%s\n", titi);
	printf("%d\n", toto);
	printf("%d\n", toto / 5);
	printf("%d\n", toto % 5);
	printf("%.1f\n", tutu / 5);
	printf("%ld\n", sizeof(titi));
	printf("%ld\n", sizeof(toto));
	printf("%ld\n", sizeof(tutu));
	return (EXIT_SUCCESS);
}
