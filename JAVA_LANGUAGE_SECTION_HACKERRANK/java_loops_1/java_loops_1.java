import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;



public class Solution
{
	public static void main(String[] args) throws IOException
	{
		int	i;

		i = 1;
		BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

		int N = Integer.parseInt(bufferedReader.readLine().trim());

		bufferedReader.close();
		while (i <= 10)
		{
			System.out.print(N);
			System.out.print(" x ");
			System.out.print(i);
			System.out.print(" = ");
			System.out.print(N * i);
			System.out.println();
			i++;
		}
	}
}
