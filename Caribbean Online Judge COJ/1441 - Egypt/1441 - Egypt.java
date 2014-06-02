import java.util.Scanner;
import java.util.Arrays;
/*
* Autor: Angel Jaime
* 1441 - Egypt. COJ
*
* Problema de geometria basica, solamente basta aplicar el bien conocido Teorema de Pitagoras (c^2 = a^2 + b^2)
* La entrada de datos se lee hasta que los valores de A, B y C sean 0, en este caso nos apoyamos de un ciclo infinito
* que haga break cuando esta condicion se cumpla, y asi termine el programa
* Para este problema los valores se leen en un arreglo que debemos ordenar para obtener el valor mayor
* que en este caso equivaldria al lado mayor, y este seria el valor de c.
* Ya solamente queda evaluar el Teorema de Pitagoras. Si este se cumple, entonces nuestro triangulo
* es un triangulo rectangulo e imprimos "right", de lo contrario, no lo es e imprimimos "wrong"
*/
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int [] values = new int[3]; //Arreglo para almacenar valores dados
		
		while(true) //Ciclo infinito
		{
			values[0] = s.nextInt(); //Leemos cada valor por separado y los almacenamos en los 3 diferentes indices del arreglo
			values[1] = s.nextInt();
			values[2] = s.nextInt();
			if(values[0] == 0 && values[1] == 0 && values[2] == 0) break; //Si los tres valores son igual a 0, termina
			Arrays.sort(values); //Ordenamos los valores con el metodo Sort del API de Java
			if(Math.pow(values[2], 2) == ((Math.pow(values[1], 2)) + (Math.pow(values[0], 2)))) //Evaluamos Teorema de Pitagoras
			{
				System.out.println("right"); //cumple
			}
			else
			{
				System.out.println("wrong"); //no cumple
			}
		}
	}
}