/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev_java.java                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 05:01:50 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 05:01:54 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.util.*;

public class strrev_java
{
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		String str = sc.next();
		boolean isPal = true;
		for (int i = 0; i < str.length() / 2; i++)
		{
			if (str.charAt(i) != str.charAt(str.length() - i - 1))
			{
				isPal = false;
				break;
			}
		}
		if (isPal)
		{
			System.out.println("Yes");
		}
		else
		{
			System.out.println("No");
		}
	}
}
