/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manip.java                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 00:00:52 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 00:00:55 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.util.*;
import java.util.Locale;

public class string_manip
{

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String A=sc.next();
		String B=sc.next();

		int	sum;
		int	lenA;
		int	lenB;

		lenA = A.length();
		lenB = B.length();
		sum = lenA + lenB;
		System.out.println(sum);
		if (A.compareTo(B) > 0)
			System.out.println("Yes");
		else
			System.out.println("No");

		String cap0 = A.substring(0, 1).toUpperCase() + A.substring(1);
		String cap1 = B.substring(0, 1).toUpperCase() + B.substring(1);

		System.out.print(cap0);
		System.out.print(" ");
		System.out.print(cap1);
	}
}

