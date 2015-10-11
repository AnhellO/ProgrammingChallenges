import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class Aaaaah {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder out = new StringBuilder("Ah");
        int tDiameter = 2 * (2 * Integer.parseInt(r.readLine()));
        
        for(int i = 0 ; i < tDiameter ; i++)
        {
            out.insert(1, 'a');
        }
        System.out.println(out);
    }
}