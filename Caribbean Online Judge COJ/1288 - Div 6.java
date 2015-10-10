import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class Div6 {
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        int T = s.nextInt();
        
        while(T != 0)
        {
            BigInteger n = s.nextBigInteger();
            System.out.println((isDiv6(n)));
            T--;
        }
    }
    
    static String isDiv6(BigInteger n)
    {
        return (n.mod(new BigInteger("6")).equals(BigInteger.ZERO)) ? "YES" : "NO";
    }
}