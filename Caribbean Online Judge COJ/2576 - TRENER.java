import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
/**
 *
 * @author CoyoteCOJ
 */
class Main {
    public static void main(String [] args) throws IOException {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
	int noCasos, cont = 1;
        String in;
        
        noCasos = Integer.parseInt(r.readLine());
        StringBuilder chars = new StringBuilder(noCasos);
        char temps[] = new char[noCasos];
        while(noCasos!=0)
        {
            in = r.readLine().toLowerCase();
            chars.append(in.charAt(0));
            noCasos--;
        }
        temps = chars.toString().toCharArray();
        Arrays.sort(temps);
        StringBuilder out = new StringBuilder(noCasos);
        
        for(int i = 0 ; i < temps.length ; i++)
        {
            if(i >= 1)
            {
                cont = (temps[i] == temps[i - 1]) ? cont + 1 : 1;
                if(cont >= 5 && out.toString().lastIndexOf(temps[i]) == -1)
                {
                    out.append(temps[i]);
                    cont = (temps[i] == temps[i - 1]) ? cont + 1 : 1;
                }
            }
        }           
        System.out.println((out.length() != 0) ? out : "PREDAJA");
    } 
}