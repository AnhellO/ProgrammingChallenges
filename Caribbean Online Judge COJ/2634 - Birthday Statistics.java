import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class BirthdayStatistics {
    public static void main(String [] args) throws IOException
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
        String in;
        int conts[] = new int[12];
        int n = Integer.parseInt(r.readLine());
        
        while(n != 0)
        {
            in = r.readLine();
            
            if(in.contains("/1/")){
                conts[0]++;
            }
            else if(in.contains("/2/")){
                conts[1]++;
            }
            else if(in.contains("/3/")){
                conts[2]++;
            }
            else if(in.contains("/4/")){
                conts[3]++;
            }
            else if(in.contains("/5/")){
                conts[4]++;
            }
            else if(in.contains("/6/")){
                conts[5]++;
            }
            else if(in.contains("/7/")){
                conts[6]++;
            }
            else if(in.contains("/8/")){
                conts[7]++;
            }
            else if(in.contains("/9/")){
                conts[8]++;
            }
            else if(in.contains("/10/")){
                conts[9]++;
            }
            else if(in.contains("/11/")){
                conts[10]++;
            }
            else if(in.contains("/12/")){
                conts[11]++;
            }
            n--;
        }
        for(int i = 0 ; i < 12 ; i++)
        {
            System.out.println((i + 1) + " " + conts[i]);
        }
    }
}