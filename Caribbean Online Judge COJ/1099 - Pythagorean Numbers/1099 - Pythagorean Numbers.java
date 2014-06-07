import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class PythagoreanNumbers {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String line, numbers[];
        int n[] = new int[3];
        
        while(true)
        {
            line = r.readLine();
            if(line.equals("0"))
                break;
            
            numbers = line.split(" ");
            
            n[0] = Integer.parseInt(numbers[0]);
            n[1] = Integer.parseInt(numbers[1]);
            n[2] = Integer.parseInt(numbers[2]);
            
            n[0] *= n[0];
            n[1] *= n[1];
            n[2] *= n[2];
            
            System.out.println((n[0] + n[1] == n[2] || n[0] + n[2] == n[1] || n[1] + n[2] == n[0]) ? "right" : "wrong");
        }
    }
}