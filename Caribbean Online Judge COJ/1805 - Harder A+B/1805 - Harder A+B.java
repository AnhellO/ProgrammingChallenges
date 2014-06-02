import java.util.Scanner;
/*
* Autor: Angel Jaime
* 1805 - Harder A+B. COJ
*
* Problema sencillo, aunque con maña. Se debe de seguir solamente la formula, pero hay que considerar
* los numeros maximos que el problema puede dar de entrada (10 ^ 9, equivalente a 1000000000).
* ¿Que pasa si para A y B damos este valor de 10 ^ 9?, tendriamos como resultado 4000000000, por lo tanto,
* si conocemos correctamente los valores limites que los tipos de datos primitivos de Java pueden almacenar,
* podremos darnos cuenta que un 'int' tiene un rango maximo de 2,147,483,647 (inclusive)(2^31 -1), por lo tanto
* un int no puede almacenar ese resultado tan grande, resultando en un desborde de valor. Pero si conocemos
* el tipo 'long' que almacena 9,223,372,036,854,775,807 (inclusive)(2^63 -1), podremos de manera correcta
* resolver el problema del desborde de variables.
*/
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		long A = s.nextLong(); //Se declaran los valores como 'long', y se leen como tal
		long B = s.nextLong();
		System.out.println((A + B) + (A - B) + (B + A) + (B - A)); //Se imprime la formula directamente
	}
}