import java.util.Scanner;
import java.io.IOException;
/*
* Autor: Angel Jaime
* 1483 - Geometrical Task I. COJ
* 
* Problema basico de geometria, aqui lo complicado es la entrada de los datos, ya que se tiene
* que evaluar si el area que tenemos que calcular es para un rectangulo (y en su caso leer 2 valores)
* o es para un cuadrado (y en su caso solamente leer un valor), por lo que se tiene que leer primero
* toda la linea como un String, y luego hacer uso del metodo split sobre esa linea, 
* dividiendola por medio de los espacios y guardando la division en un arreglo de strings. Acto seguido solamente
* hacemos la validacion de que figura estamos calculando el area, en caso de ser rectangulo leimos 2
* valores mas en la linea y se guardaron en los dos ultimos indices del arreglo despues del uso de split,
* habria que convertirlos a enteros y calcular el area del rectangulo; en es caso del cuadrado solamente
* se leyo un valor, y se procede a convertirlo a entero, multiplicandolo por si mismo como resultado del area
*
* Quienes tengan duda del funcionamiento del metodo split, pueden preguntarnos con todo gusto, o bien,
* darse una vuelta por este blog que lo explica muy bien :)
* http://javainutil.blogspot.mx/2013/04/java-manejo-de-cadenas-metodo.html
*/
class GeometricalTask1 
{
    public static void main(String [] args) throws IOException
    {
        Scanner s = new Scanner(System.in); //Creamos scanner del lectura
        String div[]; //creamosnuestro arreglo de Strings donde se
        				//guardaran los valores despues de separarlos por medio de los espacios con el metodo Split
        div = s.nextLine().split(" "); //Leemos la linea y hacemos el split de la misma
        if(div[0].compareTo("rectangle") == 0) //Y comparamos con el metodo compareTo tambien de la clase String
        { //Si es rectangulo entonces hay 2 valores mas en el arreglo, los casteamos a enteros e imprimimos el area
        	System.out.println(Integer.parseInt(div[1]) * Integer.parseInt(div[2]));
        }
        else
        { //Si no, es cuadrado y solamente hay un valor mas en nuestro arreglo, lo casteamos y obtenemos el area del cuadrado
        	System.out.println(Integer.parseInt(div[1]) * Integer.parseInt(div[1]));
        }
    }
}