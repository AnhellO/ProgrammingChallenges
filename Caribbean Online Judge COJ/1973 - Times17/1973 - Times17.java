import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
/*
* Autor: Angel Jaime
* 1973 - Times17 - COJ
*
* Problema de teoria de numeros (BigInteger). De entrada en cualquier lenguaje hay que manejar el
* numero como una cadena de caracteres y convertirla a numero decimal, ya sea que usemos un algoritmo
* de conversion de bases, o manejemos directamente alguna libreria de BigInteger (en el caso de los
* lenguajes que la poseen). En el caso de Java y con la existencia de BigInteger, la cosa se facilita
* solo hay que optimizar usando BufferedReader para la lectura en vez de Scanner. Una vez hecho esto
* crearemos dos tipos BigInteger, uno que sea nuestro N, y otro que equivalga al numero "17", y utilizamos
* el metodo "multiply" de la clase BigInteger, asignando el resultado a N. Ya para imprimir basta
* con usar el metodo toString, tambien de la clase BigInteger, y le pasamos como parametro la base
* en la que deseamos imprimir el numero, en este caso seria la base 2.
*/
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader r = new BufferedReader(new InputStreamReader(System.in)); //Buffer de lectura
		BigInteger seventeen = new BigInteger("17"); //Numero 17 en BigInteger
		BigInteger N = new BigInteger(r.readLine(), 2); //Creamos nuestra N, pasando como parametros al buffer del lectura (que devuelve
														//un string), y a la base del numero
		N = N.multiply(seventeen); //Multiplicamos y asignamos
		System.out.println(N.toString(2)); //Imprimimos en base 2 o binario
	}
}
