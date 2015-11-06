import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;
import java.text.DecimalFormat;

class Main
{
	public static void main (String[] args) {
		Scanner s = new Scanner(System.in);
		//1.- Leer radios y guardarlos en nuestro arreglo
		int n = s.nextInt();
		Integer A[] = new Integer[n];
		for(int i = 0 ; i < n ; i++) {
			A[i] = s.nextInt();
		}
		//2.- Ordenar arreglo en orden descendente
		Arrays.sort(A, Collections.reverseOrder());
		//System.out.println(Arrays.toString(A));
		//3.- Obtener total de área roja
		double area = 0.0;
		for(int i = 0 ; i < n ; i++) {
			if(i % 2 == 0) {
				area += (Math.PI * (A[i] * A[i]));
			} else {
				area -= (Math.PI * (A[i] * A[i]));
			}
		}
		//4.- Imprimir resultado con 10 decimales
		DecimalFormat formateador = new DecimalFormat("0.0000000000");
		System.out.println(formateador.format(area));
	}
}

/*
int -> Integer
double -> Double
float -> Float
boolean -> Boolean
char -> Character
long -> Long
*/