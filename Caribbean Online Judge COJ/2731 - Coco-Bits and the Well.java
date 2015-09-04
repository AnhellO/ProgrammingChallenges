import java.util.Scanner;
/*
* Autor: Angel Jaime
* 2731 - Coco-Bits and the Well. COJ
*
* Geometria basica. Basicamente aqui hay que deducir, conociendo el area del cuadrado y del circulo,
* que si nos proporcionan el lado de un cuadrado, este equivaldra al diametro del circulo inscrito,
* por lo tanto bastara con dividir el lado entre 2, para obtener el radio. Una vez hecho esto, podremos
* obtener el area pedida en el problema tan solo elaborando una pequeña formulita que obtenga el area
* del cuadrado, y le reste el area del circulo. De aqui el mayor problema viene en la presicion que se le
* de a Pi (utilizando Math.PI de Java basta), y en el formateo de la salida (los 2 decimales), el problema
* no es aceptado ni con System.out.printf, ni con Decimal Format, solamente con String.format, y haciendo
* un reemplazo de la coma por punto. No se si seran cuestiones de presicion o salida, pero en Java es la unica
* manera que encontre para que el problema fuera aceptado
*/
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		double side, radius, area; //lado del cuadrado, radio y area a calcular
		int nCases = s.nextInt(); //leemos el numero de casos
		
		while(nCases != 0) //mientras se sigan procesando los casos
		{
			side = s.nextDouble(); //leemos el lado como Double (hay que leerlo de esta forma, ya que la entrada es dada asi)
			radius = side / 2.0; //obtenemos el radio (Lado = Diametro, por lo tanto, Lado / 2 = radio)
			area = (side * side) - Math.PI * (radius * radius); //Plasmamos la formula (Area Pedida = Area Cuadrado - Area Circulo)
			System.out.println(String.format("%.2f", area).replace(',', '.')); //He aqui el formateo, usar este mismo
			nCases--; //decrementamos el numero de casos
		}
	}
}