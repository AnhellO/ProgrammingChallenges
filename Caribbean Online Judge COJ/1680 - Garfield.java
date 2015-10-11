import java.io.IOException;
import java.util.Scanner;
 
class Garfield 
{
    public static void main(String[] args) throws IOException 
    {
        Scanner sc = new Scanner(System.in);
        int i;
        String sections[], out;
        
        while (sc.hasNext()) 
        {
            sections = sc.nextLine().split(" ");
            out = "";
            do 
            {
                out = "";
                String div[] = sections[0].split(sections[1]);
                for (i = 0; i < div.length; i++) 
                    out += div[i];
                
                sections[0] = out;
            }while(out.contains(sections[1]));
            System.out.println(out);
        }
    }
}