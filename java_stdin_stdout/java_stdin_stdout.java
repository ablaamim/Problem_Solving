/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   java_stdin_stdout.java                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:32:04 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 17:32:08 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class java_stdin_stdout
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int a;
		int b;
		int c;

		a = scan.nextInt();
		b = scan.nextInt();
		c = scan.nextInt();

		System.out.println(a);
		System.out.println(b);
		System.out.println(c);
	}
}
