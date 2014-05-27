import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		String line, sections[];
		int i, j, T = Integer.parseInt(r.readLine());
		while(T-- > 0)
		{
			line = r.readLine().toUpperCase();
			sections = line.split(" ");
			for(i = 0 ; i < sections.length ; i++)
			{
				StringBuilder temp = new StringBuilder(sections[i]);
				for(j = temp.length() - 1 ; j > -1 ; j--)
				{
					if(temp.charAt(j) != 'S')
						break;
				}
				sections[i] = temp.delete(j + 1, temp.length()).toString();
				System.out.print((i < sections.length - 1) ? sections[i] + " " : sections[i]);
			}
			System.out.println();
		}
	}
}
