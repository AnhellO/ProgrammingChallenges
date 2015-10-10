import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;

/**
 *
 * @author Angel Jaime
 */
public class Bessie {
    public static void main(String[] args) throws IOException {
	BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
	String in;
        String [] division = new String[2];
        int suma = 0, producto, i, j;
        String a, b;
        
        in = r.readLine();
        division = in.split(" ");
        a = division[0];
        b = division[1];
        
        for (i = 0 ; i < a.length() ; i++)
        {
            for (j = 0 ; j < b.length() ; j++)
            {
                producto = (Integer.parseInt(String.valueOf(a.charAt(i)))) * (Integer.parseInt(String.valueOf(b.charAt(j))));
                suma += producto;
            }
        }
        System.out.println(suma);
    }
}
