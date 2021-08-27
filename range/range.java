/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.java                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:37:57 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/27 14:37:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;
import java.io.*;

class range
{
	public static void main(String []args)
	{
		Scanner sc = new Scanner(System.in);
		int t=sc.nextInt();
		int i;

		i = 0;
		while (i < t)
		{
			try
			{
				long x=sc.nextLong();
				System.out.println(x + " can be fitted in:");
				if(x >=- 128 && x<= 127)
					System.out.println("* byte");
				if (x >= -32768 && x <= 32767)
					System.out.println("* short");
				if (x >= -2147483648 && x <= 2147483647)
					System.out.println("* int");
				if (x >= -9223372036854775808L && x <= 9223372036854775807L)
					System.out.println("* long");
			}
			catch(Exception e)
			{
				System.out.println(sc.next()+" can't be fitted anywhere.");
			}
			i++;
		}
	}
}
