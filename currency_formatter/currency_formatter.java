/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   currency_formatter.java                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 04:35:46 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 04:35:48 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class currency_formatter
{
	public static void main(String[] args)
	{
		Scanner scanner = new Scanner(System.in);
		double payment = scanner.nextDouble();
		scanner.close();
		Locale indiaLocale = new Locale("en", "IN");

		NumberFormat us = NumberFormat.getCurrencyInstance(Locale.US);
		NumberFormat india = NumberFormat.getCurrencyInstance(indiaLocale);
		NumberFormat china = NumberFormat.getCurrencyInstance(Locale.CHINA);
		NumberFormat france = NumberFormat.getCurrencyInstance(Locale.FRANCE);

		System.out.println("US: "     + us.format(payment));
		System.out.println("India: "  + india.format(payment));
		System.out.println("China: "  + china.format(payment));
		System.out.println("France: " + france.format(payment));
	}
}
