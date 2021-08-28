/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_dimension.java                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 05:12:49 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 05:12:51 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class one_dimension{

	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();

		int[] a = new int[n];
		for (int i = 0; i < n; ++i)
		{
			int val = scan.nextInt();
			a[i] = val;
		}
		scan.close();
		for (int i = 0; i < a.length; i++)
		{
			System.out.println(a[i]);
		}
	}
}
