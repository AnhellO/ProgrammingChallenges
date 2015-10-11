import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class BinaryCheckSum {
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        int n, cont = 0;
        BigInteger k;
        
        n = s.nextInt();
        
        while(n != 0)
        {
            k = s.nextBigInteger();
            cont += k.bitCount();
            n--;
        }
        System.out.println(cont);
    }
}