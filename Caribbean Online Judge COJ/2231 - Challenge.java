import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/**
 *
 * @author Angel Jaime
 */
class Main {
    public static void main(String [] args) throws IOException {
    	BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
    	int n, cont1 = 0, cont2 = 0;
    	String game;
        
    	n = Integer.parseInt(r.readLine());
    	
    	while(n != 0)
    	{
    	    game = r.readLine().toLowerCase();
    	    switch(game)
            {
                case "rock scissors":
                    cont1++;
                    	break;
                
            	case "rock paper":
            	    cont2++;
            	    	break;
            	
            	case "paper rock":
            	    cont1++;
            		break;
            	
            	case "paper scissors":
            	    cont2++;
            		break;
            
            	case "scissors paper":
            	    cont1++;
            		break;
            	
                case "scissors rock":
            	    cont2++;
            		break;
            }
    	    n--;
    	}
        System.out.println((cont1 > cont2) ? "A win" : (cont1 < cont2) ? "B win" : "tied");
    }
}