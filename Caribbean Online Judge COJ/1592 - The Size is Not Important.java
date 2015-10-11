import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class TheSizeIsNotImportant 
{
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        BigInteger n1, n2;
        int m = s.nextInt();
        
        
        while(2 * m > 0)
        {
            n1 = s.nextBigInteger();
            n2 = s.nextBigInteger();
            
            System.out.println(n1.multiply(n2));
            m--;
        }
    }
}