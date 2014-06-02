import java.util.Scanner;
import java.util.Vector;
/*
* Autor: Angel Jaime
* 1483 - Geometrical Task I. COJ
* 
* Problema de nivel medio - facil en la dificultad novatos, implica el uso de la clase Vector, o lo que bien
* se puede llamar: Arreglos Dinamicos. Un arreglo dinamico tiene la ventaja de que puede expandir
* o decrementar su tamaño y con ello su numero de elementos en el transcurso del programa, que, a diferencia
* de un arreglo normal o arreglo estatico, esto no es posible ya que tiene un tamaño o numero de elementos determinado
* que no puede cambiar en el transcurso del programa.
* Para mayor informacion del uso de la clase Vector, pueden consultar el siguiente link:
* http://www.slideshare.net/MonjeOneble/clase-vector-en-java
*
* Una vez conocido el concepto de un arreglo dinamico, basta con saber que tenemos que leer 10 enteros
* y para cada uno calcular el modulo de 42 (valor i % 42), una vez calculado el residuo, ver si existe o no
* dentro de los residuos previamente calculados, en caso de NO existir, incrementamos el contador y agregamos
* el nuevo residuo al vector; en caso de existir validamos con una bandera para no aumentar el contador
* de los diferentes residuos. ¿La idea basica?, ver cuantos residuos diferentes se obtienen de los 10 numeros
* modulo 42.
*/
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int i, j, val, cont = 0; //Contador para los residuos diferentes
		boolean flag; //Bandera para validar en caso de residuo existente
		Vector<Integer> nums = new Vector<Integer>(); //Arreglo dinamico vacio
		for(i = 0 ; i < 10 ; i++) //Leemos 10 valores
		{
			flag = false; //Y para cada uno siempre inicializamos la bandera en Falso
			val = s.nextInt();
			for(j = 0 ; j < nums.size() ; j++) //Vamos a ir buscando siempre en el vector que no exista el residuo actual
			{
				if(val % 42 == nums.elementAt(j)) //Si existe entonces activamos la bandera y rompemos el ciclo
				{
					flag = true;
					break;
				}
			}
			if(!flag) //Si nuestra bandera no se activo entonces significa que no se encontro el residuo actual
			{		//de tal manera que ya tenemos un residuo diferente, por lo tanto incrementamos nuestro contador
				cont++;
				nums.add(val % 42); //Y agregamos el nuevo residuo
			}
		}
		System.out.println(cont);
	}
}