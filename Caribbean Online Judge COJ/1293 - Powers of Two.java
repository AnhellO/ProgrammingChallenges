import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;
/**
 *
 * @author Angel Jaime
 */
class PowersOfTwo {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(r.readLine());
        BigInteger power = new BigInteger("2");
        System.out.println(power.pow(n));
    }
}