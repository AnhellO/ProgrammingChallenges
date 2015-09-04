import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(r.readLine());
		BigInteger N;
		while(T-- != 0)
		{
			N = new BigInteger(r.readLine());
			if(N.toString(2).contains("01") || N.toString(2).contains("10"))
				System.out.println("YES");
			else
				System.out.println("NO");
		}
	}
}