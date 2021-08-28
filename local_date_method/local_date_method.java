/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   local_date_method.java                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 04:25:03 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 04:25:04 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;
import java.time.LocalDate;

class Result
{
	public static String findDay(int month, int day, int year)
	{
		int d = Integer.valueOf(day);
		int m = Integer.valueOf(month);
		int y = Integer.valueOf(year);
		LocalDate date = LocalDate.of(y, m, d);
		return date.getDayOfWeek().toString();
    }
}

public class local_date_method
{
	public static void main(String[] args) throws IOException
	{
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

		String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

		int month = Integer.parseInt(firstMultipleInput[0]);
		int day = Integer.parseInt(firstMultipleInput[1]);
		int year = Integer.parseInt(firstMultipleInput[2]);
		String res = Result.findDay(month, day, year);
		bufferedWriter.write(res);
		bufferedWriter.newLine();

		bufferedReader.close();
		bufferedWriter.close();
	}
}
