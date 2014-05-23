import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class NumericParity{

     public static void main(String []args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        byte [] par;
        long n;
        
        while(true)
        {
            n = new Long(r.readLine());
            
            if(n == 0)
                break;
            
            System.out.println("The parity of " + Long.toBinaryString(n) + " is " + Long.bitCount(n) + " (mod 2).");
        }
     }
}