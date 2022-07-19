import java.util.Scanner;

public class Solution
{
	public static void main(String[] args)
	{
		int i;

		i = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("================================");
		while(i < 3)
		{
			String	s1 = sc.next();
			int		x = sc.nextInt();
			System.out.printf("%-15s%03d%n", s1, x);
			i++;
        }
		System.out.println("================================");
	}
}
