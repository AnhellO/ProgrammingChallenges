import java.io.IOException;
import java.math.BigInteger;
import java.util.Scanner;
/**
 *
 * @author Angel Jaime
 */
class CruelMathematicsTeacher 
{
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in);
        BigInteger b = s.nextBigInteger(); 
        int i, cont = 0, e = s.nextInt();
        char [] num = b.pow(e).toString().toCharArray();
        for(i = 0 ; i < num.length ; i++)
        {
            System.out.print(num[i]);
            cont++;
            if(cont == 70)
            {
                System.out.println();
                cont = 0;
            }
        }
        if(cont != 0) 
            System.out.println();
    }
}