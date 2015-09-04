import java.util.Scanner;
/*
* Autor: Angel Jaime
* 1683 - DPA. COJ
*
* Problema de simulacion. Solamente hay que leer el numero de casos a procesar, y para cada caso
* realizar una sumatoria desde 1 hasta N - 1, de todos aquellos numeros entre los que N sea divisible,
* si esta sumatoria es menor a N, entonces imprimimos "Deficient", si es igual, imprimos "Perfect", de
* lo contrario imprimimos "Abundant"
*/
class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner s = new Scanner(System.in);
		int N, i, sum, nCases = s.nextInt();
		
		while(nCases != 0)
		{
			N = s.nextInt(); //Leemos valor de N
			sum = 0; //Para cada caso reiniciamos el valor de la sumatoria
			for(i = 1 ; i < N ; i++) //Desde 1 hasta N - 1. OJO, no iniciar desde 0 o se causara indeterminacion matematica
			{
				if(N % i == 0) //Si N es divisible entre el iesimo valor actual (Si el modulo '%' o resto de la division es igual a 0)
				{
					sum += i; //Sumamos
				}
			}
			if(sum < N) System.out.println("Deficient"); //Aqui ya solamente se evalua si la suma es menor a N...
			else if(sum == N) System.out.println("Perfect"); //si es igual....
			else System.out.println("Abundant"); //Si es mayor
			nCases--; //Decrementamos numero de casos
		}
	}
}
