import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
/**
 *
 * @author Angel Jaime
 */
class SumOfDigits {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int t;
        BigInteger num, sum;
        
        t = Integer.parseInt(r.readLine());
        
        while(t-- != 0)
        {
            num = new BigInteger(r.readLine()).abs();
            sum = BigInteger.ZERO;
            
            while(!num.equals(BigInteger.ZERO))
            {
                sum = sum.add(num.mod(BigInteger.valueOf(10)));
                num = num.divide(BigInteger.valueOf(10));
            }
            System.out.println(sum);
        }
    }
}