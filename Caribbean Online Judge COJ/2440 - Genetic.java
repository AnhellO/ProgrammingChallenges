import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class ADN {
    public static void main(String[] args) throws IOException {
	BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
	int noCasos;
        String in, out;
        String [] division;
        
        noCasos = Integer.parseInt(r.readLine());
        
        while(noCasos != 0)
        {
            in = r.readLine().toUpperCase();
            division = in.split(" ");
            out = (division[0].contains(division[1]) && division[0].contains("T")) ? "Y" : "N";
            System.out.println(out);
            noCasos--;
        }
    }
}
