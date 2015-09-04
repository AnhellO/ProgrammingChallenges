#include <cstdio>
/*
* Autor: Angel Jaime
* 1579 - Bakugan - COJ
*
* Problema con técnica de implementacion optima. Debemos crear los arreglos de bakugans para cada jugador, y directamente
* al leer el bakugan de cada jugador, sumar los puntajes para cada uno, apoyados por dos contadores. La parte buena del problema
* viene al momento de evaluar el bonus de puntos, ya sea que alguno de los jugadores lo realice primero, o bien, que ambos lo
* hagan al mismo tiempo, usaremos una bandera que se activara en este caso. Ya dependiendo de que quien lo haya hecho primero
* es como otorgaremos el bonus de 30 puntos mas a tal jugador
*/
using namespace std;
//Creamos un contador para Mark, otro para Leti y un contador que registre el caso de 3 valores iguales seguidos
int R, i, contM, contL, contThree;
bool flag; //bandera, se activa en caso de que alguno, o ambos jugadores
			//hagan el bonus de puntos por los 3 valores iguales al hilo

int main()
{
	while(scanf("%d", &R) != EOF && R) //Leer hasta el final del archivo y validar que el número de partidas no sea 0
	{									//si es 0 termina el programa como lo marca el problema, esto es mera lectura
		int mark[R], leti[R]; //arreglos tamaño R = numero de bakugans para cada jugador
		contM = contL = contThree = flag = 0; //Inicializamos contadores y bandera para cada caso
		for(i = 0 ; i < R ; i++)
		{
			scanf("%d", &mark[i]); //leemos los bakugans de mark y los guardamos en el arreglo
			contM += mark[i]; //sumamos por default el valor de cada bakugan en el score de Mark
		}
		for(i = 0 ; i < R ; i++) //aplicamos lo mismo para Leti....
		{
			scanf("%d", &leti[i]);
			contL += leti[i];
		}
		for(i = 0 ; i < R ; i++) //viene lo bueno...
		{
			if((mark[i] == mark[i + 1] && mark[i] == mark[i + 2]) && (leti[i] == leti[i + 1] && leti[i] == leti[i + 2]) && !flag)
				flag = true; //En caso de que tanto Mark como Leti logren el Bonus, entonces ninguno recibe puntos y activamos la bandera
			if(!flag) //En caso de que la bandera no este activada y no haya pasado el evento en que ambos obtienen bonus al mismo tiempo...
			{
				if(mark[i] == mark[i + 1] && mark[i] == mark[i + 2]) //checamos si el bonus se arma con Mark
				{
					contM += 30;
					flag = true;
				}
				else if(leti[i] == leti[i + 1] && leti[i] == leti[i + 2])  //o si se arma con Leti
				{
					contL += 30;
					flag = true;
				}
			} //en ambos casos activamos bandera, y el bonus se lo gano el primero en armar 3 al hilo
		}
		printf("%c\n", (contM > contL) ? 'M' : ((contM == contL) ? 'T' : 'L')); //If ternario para imprimir
	}
	return 0;
}
