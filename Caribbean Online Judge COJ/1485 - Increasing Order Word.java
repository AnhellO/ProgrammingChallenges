import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
/**
 *
 * @author Angel Jaime
 */
class Main{
    public static void main(String [] args) throws IOException {
    	BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        char word[] = r.readLine().toCharArray();
        Arrays.sort(word);
        StringBuilder out = new StringBuilder();
        out.append(word);
        System.out.println(out);
    }
}