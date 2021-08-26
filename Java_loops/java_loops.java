/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   java_loops.java                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 23:39:15 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/26 23:39:17 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class java_loops
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int	N = Integer.parseInt(bufferedReader.readLine().trim());
		bufferedReader.close();
		int	i;
		int	res;

		i = 1;
		while (i <= 10)
		{
			res = N * i;
			System.out.print(N);
			System.out.print(" x ");
			System.out.print(i);
			System.out.print(" = ");
			System.out.println(res);
			i++;
        }
    }
}
