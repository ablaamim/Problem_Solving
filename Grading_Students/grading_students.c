/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grading_students.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 17:32:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/06 17:34:43 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_LEN 100000

int	main()
{
	char	s[MAX_STRING_LEN], ch;
	scanf("%s", s);
	int	total = 1;
  for (int i = 0; i < MAX_STRING_LEN; i++)
{
	ch = s[i];
	if (ch == '\0')
		break;
	if (isupper(ch))
		total++;
}
	printf("%d", total);
	return (EXIT_SUCCESS);
}
