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
        BigInteger n;
        
        do
        {
            n = s.nextBigInteger();
            if(!n.equals(BigInteger.ZERO)){
                System.out.println((isDiv11(n)) ? n + " is a multiple of 11." : n + " is not a multiple of 11.");
            }
        }while(!n.equals(BigInteger.ZERO));
    }
    
    static boolean isDiv11(BigInteger n)
    {
        return (n.mod(new BigInteger("11")).equals(BigInteger.ZERO)) ? true : false;
    }
}