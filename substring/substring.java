/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substring.java                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 00:12:13 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 00:12:14 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class substring
{

	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		String S = in.next();
		int	start = in.nextInt();
		int	end = in.nextInt();
		String str = S.substring(start, end);
		System.out.println(str);
	}
}
