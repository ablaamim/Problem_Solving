/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serie.java                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 14:11:08 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/27 14:11:13 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;
import java.io.*;

public class serie
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int t = scan.nextInt();
		int i;

		i = 0;
		while (i < t)
		{
			int a = scan.nextInt();
			int b = scan.nextInt();
			int n = scan.nextInt();
			int sum;
			int index;

			index = 0;
			sum = a;
			while (index < n)
			{
				sum += Math.pow(2, index) * b;
				System.out.print(sum);
				System.out.print(" ");
				index++;
			}
			System.out.println();
			i++;
		}
		scan.close();
	}
}
