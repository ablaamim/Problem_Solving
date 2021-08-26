/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   java_input_formatting.java                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 20:11:05 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 20:11:06 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class java_input_formatting
{
	public static void main(String[] args)
	{
		int		i;
		Scanner scan = new Scanner(System.in);
		System.out.println("==========================");
		i = 0;
		while (i < 3)
		{
			int x;
			String str;

			str = scan.next();
			x = scan.nextInt();
			System.out.printf("%-15s%03d\n", str, x);
			i++;
		}
		System.out.println("===========================");
	}
}
