/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EOF.java                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:11:17 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/27 15:11:19 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class EOF
{
	public static void main(String[] args)
	{
		Scanner scan = new Scanner(System.in);
		int	bufferSize;

		bufferSize = 0;
		while(scan.hasNext())
			System.out.println(++bufferSize + " " + scan.nextLine());
		scan.close(); 
	}
}
