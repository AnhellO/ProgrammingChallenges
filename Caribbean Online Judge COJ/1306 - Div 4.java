import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class Main {
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        String in;
        int T = s.nextInt();
        
        while(T != 0)
        {
            BigInteger n = s.nextBigInteger();
            System.out.println((isDiv4(n)));
            T--;
        }
    }
    
    static String isDiv4(BigInteger n)
    {
        return (n.mod(new BigInteger("4")).equals(BigInteger.ZERO)) ? "YES" : "NO";
    }
}