import java.util.Scanner;
/*
* Autor: Angel Jaime
* 1933 - Og. COJ
*
* Poblema sencillo, solamente consiste en leer multiples veces la entrada de datos de las diferentes
* manos del canibal Og y luego imprimir la suma de sus hijos. Esto lo haremos por medio de un ciclo
* infinito que haga break cuando ambas manos leidas equivalgan a 0 (tal como lo pide la entrada)
*/
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int hand1, hand2; //Mano 1 y mano 2
		while(true) //ciclo infinito, leemos manos antes de preguntar por valores
		{
			hand1 = s.nextInt();
			hand2 = s.nextInt();
			if(hand1 == 0 && hand2 == 0) break; //Si los valores equivalen a 0, entonces haz break y termina
			System.out.println(hand1 + hand2); //Si no, pasa directo a la suma y sigue con el ciclo
		}
	}
}