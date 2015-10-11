import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class CountingOnes {
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        int cont, t;
        BigInteger a, b;
        
        t = s.nextInt();
        
        while(t != 0)
        {
            a = s.nextBigInteger();
            b = s.nextBigInteger();
            cont = 0;
            while(a.compareTo(b) != 1)
            {
                cont += a.bitCount();
                a = a.add(BigInteger.ONE);
            }
            System.out.println(cont);
            t--;
        }
    }
}