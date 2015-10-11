import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
/**
 *
 * @author Angel Jaime
 */
class Main {
    public static void main(String [] args) throws IOException {
    	BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        char temps[];
        int cont = 1, t = Short.parseShort(r.readLine());
        
        while(t != 0)
        {
            temps = r.readLine().toCharArray();
            Arrays.sort(temps);
            for(int i = 0 ; i < temps.length ; i++)
            {
                if(i >= 1)
                {
                    cont = (temps[i] != temps[i - 1]) ? cont + 1 : cont;
                }
            }
            System.out.println(cont);
            cont = 1;
            t--;
        }
    }
}