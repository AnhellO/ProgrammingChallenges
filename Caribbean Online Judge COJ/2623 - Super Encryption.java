import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class SuperEncryption {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        int i; char [] div;
        StringBuilder out = new StringBuilder();
        
        div = r.readLine().toCharArray();
        
        if(div.length % 2 == 0)
        {
            for(i = (div.length / 2) - 1 ; i >= 0 ; i--)
            {
                out.append(div[i]);
            }
            for(i = div.length - 1 ; i >= div.length / 2 ; i--)
            {
                out.append(div[i]);
            }
            System.out.println(out);
        }
        else
        {
            for(i = (div.length / 2) - 1 ; i >= 0 ; i--)
            {
                out.append(div[i]);
            }
            for(i = div.length - 1 ; i >= (div.length / 2) + 1  ; i--)
            {
                out.append(div[i]);
            }
            out.insert(div.length / 2,div[(div.length / 2)]);
            System.out.println(out);
        }
    }
}