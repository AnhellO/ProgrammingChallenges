import java.io.IOException;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class JaneFirstWords 
{
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        while(s.hasNext())
        {
            System.out.println((s.nextLine().matches("da+dd?(i|y)")) ? "She called me!!!" : "Cooing");
        }
    }
}