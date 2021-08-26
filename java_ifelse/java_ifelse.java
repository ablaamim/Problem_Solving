/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   java_ifelse.java                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:49:19 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 17:49:23 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class java_ifelse
{
	private static final Scanner scan = new Scanner(System.in); 
	public static void main(String[] args)
	{
		int n;
		n = scan.nextInt();

		if (n % 2 == 1 && n >= 2 && n <= 5)
			System.out.println("Not Weird");
		else if (n % 2 == 0 && n >= 6 && n <= 20)
			System.out.println("Weird");
		else
			System.out.println("Not Weird");
	}
}
