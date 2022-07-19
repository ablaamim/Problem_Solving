import java.util.*;
import java.io.*;

class Solution
{
	public static void	main(String []argh)
	{
		int	i;

		i = 0;
		Scanner in = new Scanner(System.in);
		int	t = in.nextInt();
		while (i < t)
		{
			int	a = in.nextInt();
			int	b = in.nextInt();
			int	n = in.nextInt();
			int	j = 0;
			int	res = a;
			while (j < n)
			{
				res += Math.pow(2, j)  *b;
				System.out.print(res);
				System.out.print(" ");
				j++;
			}
			System.out.println();
			i++;
		}
		in.close();
	}
}
