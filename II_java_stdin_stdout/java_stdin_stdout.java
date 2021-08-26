/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   java_stdin_stdout.java                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:30:59 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 18:31:12 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class java_stdin_stdout
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int		i;
		double	d;
		String	s;

		i = scan.nextInt();
		d = scan.nextDouble();
		scan.nextLine();
		s = scan.nextLine();
		System.out.println("String :" + s);
		System.out.println("Double :" + d);
		System.out.println("Int :" + i);
	}

}
