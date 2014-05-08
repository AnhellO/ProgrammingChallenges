import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2601 - Touchscreen Keyboard
* 
* Store the keyboard in a matrix and iterate over it, first, searching the position of the chars of
* origin and destiny, and then counting the distance in the matrix. Save the distance values, and the
* word readed in two different arrays, associating them by indices, and sort them first by distance
* and in case of tie, lexicographically
*/
class TouchScreen 
{
    static int i;
    static int j;
    public static void main(String[] args) throws IOException 
    {
        BufferedReader r = new BufferedReader(new InputStreamReader(System.in));
		int k, x, cont, y, t, l, aux, distances[];
        String base, p;
        String div[], words[];
        char matriz[][]={{'q','w','e','r','t','y','u','i','o','p'},
            			{'a','s','d','f','g','h','j','k','l','\u0000'},
            			{'z','x','c','v','b','n','m','\u0000','\u0000','\u0000'}};
                
        t = Integer.parseInt(r.readLine());
        
        while(t-- > 0)
        {
            div = r.readLine().split(" ");
            words = new String[Integer.parseInt(div[1])];
            distances = new int[Integer.parseInt(div[1])];
            for(k = 0 ; k < words.length ; k++)
            {
                words[k] = r.readLine();
                for(cont = 0 ; cont < words[k].length() ; cont++)
                {
                    distances[k] += distancia(words[k].charAt(cont),div[0].charAt(cont),matriz);
                }
            }
            for(k = 0 ; k < words.length ; k++)
            {
                for(y = 0 ; y < words.length - 1 ; y++)
                {
                    if(distances[y] > distances[y + 1])
                    {
                        aux = distances[y];
                        distances[y] = distances[y + 1];
                        distances[y + 1] = aux;
                        base = words[y];
                        words[y] = words[y + 1];
                        words[y + 1] = base;
                    }
                }
            }
            for(x = 0 ; x < words.length - 1; x++)
            {
                if(distances[x + 1] == distances[x])
                {
                    for(k = 0 ; k < words.length ; k++)
                    {
                        for(y = 0 ; y < words.length - 1 ; y++)
                        {
                            if(words[y].compareTo(words[y + 1]) > 0 && distances[y] >= distances[y + 1])
                            {
                                aux = distances[y];
                                distances[y] = distances[y + 1];
                                distances[y + 1] = aux;
                                base = words[y];
                                words[y] = words[y + 1];
                                words[y + 1] = base;
                            }
                        }
                    }
                }
            }
            for(k = 0 ; k < words.length ; k++)
            {
                System.out.println(words[k] + " " + distances[k]);
            }
        }
    }
        
	static int distancia(char a, char b, char x[][])
	{
		int dist = 0 , i1, j1, i2, j2, e = 0, f = 0;
		posicion(a, x);
		i1 = i;
		j1 = j;
		posicion(b, x);
		i2 = i;
		j2 = j;
		e = i1;
		f = j1;
		if(i1 < i2)
		{			
			while(i1 != i2)
			{							
				i1++;
				dist++;
			}								
		}
		i1 = e;
		if(i1 > i2)
		{
			while(i1 != i2)
			{							
				i1--;
				dist++;
			}								
		}
		if(j1 < j2)
		{			
			while(j1 != j2)
			{							
				j1++;
				dist++;
			}								
		}
		j1 = f;
		if(j1 > j2)
		{
			while(j1 != j2)
			{							
				j1--;
				dist++;
			}								
		}
		return dist;
	}
        
	static void posicion(char a, char x[][])
    {
    	int e, f;
		i = 0;
		j = 0;
		for(e = 0 ; e < 3 ; e++)
		{
			for(f = 0 ; f < 10 ; f++)
			{
				if(x[e][f] == a)
				{
					i = e;
					j = f;
					break;
				}					
			}
		}
	}
}