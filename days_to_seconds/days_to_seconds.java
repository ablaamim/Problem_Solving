/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   days_to_seconds.java                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 19:53:54 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 19:53:56 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;

public class days_to_seconds
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int	days;

		days = scan.nextInt();
		days = days * 24 * 3600;
		System.out.println(days);
	}
}
