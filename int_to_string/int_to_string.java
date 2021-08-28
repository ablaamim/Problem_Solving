/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_string.java                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 03:55:58 by alaamimi          #+#    #+#             */
/*   Updated: 2021/08/28 03:55:59 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import java.util.*;
import java.security.*;


public class int_to_string
{
	public static void main(String[] args)
	{
		DoNotTerminate.forbidExit();
		try
		{
			Scanner in = new Scanner(System.in);

			int n = in .nextInt();
			in.close();

			String s = String.valueOf(n);
			if (n == Integer.parseInt(s))
				System.out.println("Good job");
			else
				System.out.println("Wrong answer.");
		}
		catch (DoNotTerminate.ExitTrappedException e)
		{
			System.out.println("Unsuccessful Termination!!");
		}
	}
}

class DoNotTerminate
{
	public static class ExitTrappedException extends SecurityException
	{
		private static final long serialVersionUID = 1;
	}
	public static void forbidExit()
	{
		final SecurityManager securityManager = new SecurityManager()
		{
			@Override
			public void checkPermission(Permission permission)
			{
				if (permission.getName().contains("exitVM"))
					throw new ExitTrappedException();
			}
		};
		System.setSecurityManager(securityManager);
	}
}
