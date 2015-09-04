import java.util.Scanner;
/*
* Autor: Angel Jaime
* 2185 - A ? B. COJ
* 
* Problema mas sencillo del concurso y de la categoria novatos, basta con leer los valores de
* entrada y mandar imprimir los resultados en el orden pedido con cada operador
*/
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in); //Creamos objeto de lectura de datos, Scanner
		int a = s.nextInt(); //Creamos y leemos valor para la variable "a"
		int b = s.nextInt(); //Creamos y leemos valor para la variable "b"
		System.out.println(a + b); //Se imprimen cada uno de los resultados pedidos
		System.out.println(a - b);
		System.out.println(a * b);
		System.out.println(a / b);
		System.out.println(a % b);
	}
}