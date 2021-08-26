/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Myclass.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:02:25 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 17:02:31 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Myclass
{
	public static void main(String[] args)
	{
		int	nbr;
		nbr = 0;
		while (nbr <= 42)
		{
			if (nbr % 2 == 0)
			{
				System.out.printf("%d", nbr);
				System.out.println(" Even Number.");
			}
			else
			{
				System.out.printf("%d", nbr);
				System.out.println(" Odd number.");
			}
			nbr++;
		}
	}
}
