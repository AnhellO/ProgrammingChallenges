import java.math.BigInteger;
import java.util.Scanner;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		BigInteger n, sum = BigInteger.ZERO;
		while(s.hasNext())
		{
			n = s.nextBigInteger();
			if(T > 0)
			{
				sum = sum.add(n);
				T--;
			}
		}
		System.out.println(sum);
	}
}