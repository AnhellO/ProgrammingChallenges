import java.util.Scanner;
/*
* Autor: Angel Jaime
* 2732 - Coco-Bits and the Coco-Strings. COJ
*
* Problema que involucra conocimiento de cadenas de caracteres. Los String o cadenas de caracteres
* no son mas que un arreglo del tipo de dato primitivo char, en el caso de Java, y como todo arreglo son
* objetos. Para el problema, basta con leer el numero de casos pedido, y para cada caso a evaluar,
* leer la cadena proporcionada, esta cadena la convertiremos a arreglo de caracteres con el metodo toCharArray
* proporcionado en la clase String de Java. Una vez hecho esto, recorremos el arreglo char por char, y, 
* por medio de la clase Character, preguntamos si el iesimo char en el que estamos en el ciclo for, es mayuscula
* o minuscula, y dependiendo el caso, lo convertimos a su valor contrario (Mayusculas a minusculas y viceversa).
* De ahi imprimos el char en el que estamos, ya con su nuevo valor, y terminando el ciclo for, imprimimos
* el respectivo salto de linea del caso en curso.
*/
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int i, nCases = s.nextInt(); //Leemos numero de casos a procesar
		String line; //String para almacenar la linea pedida
		char [] chars = new char[0]; //Arreglo para convertir el objeto String a arreglo de caracteres
		
		while(nCases != 0)
		{
			line = s.next(); //leemos linea 
			chars = line.toCharArray(); //la convertimos a arreglo
			for(i = 0 ; i < chars.length ; i++)
			{
				if(Character.isLowerCase(chars[i]) == true) //Si el iesimo caracter es minuscula
				{
					chars[i] = Character.toUpperCase(chars[i]); //Conviertelo a mayuscula y asignalo
				}
				else
				{
					chars[i] = Character.toLowerCase(chars[i]); //Si no, viceversa
				}
				System.out.print(chars[i]); //Imprime el char en curso
			}
			System.out.println(); //Salto de linea
			nCases--; //Decrementa caso
		}
	}
}