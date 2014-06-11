#include <cstdio>
#define ASIZE 501
using namespace std;
/*
* Autor: Angel Jaime
* 2781 - SWTCH - COJ
*
* Problema de implementacion. Lo mas conveniente es crear un arreglo con el tamaño maximo de luces
* que hay, donde cada posicion representa la iesima luz, y donde el arreglo es de valores booleanos.
* De ahi solo basta leer los datos pedidos, y dependiendo de que operacion hagamos, validamos con un if,
* si la operacion es 0 apretamos los switches de las luces en el rango [i hasta j],
* si es 1 contamos las luces prendidas desde el rango [i hasta j] e imprimos el resultado.
* Cabe recordar que todas estas operaciones se llevaran a cabo sobre el arreglo de booleanos.
*/
int N, M, S, E, i, cont;
bool Op, lights[ASIZE] = {0};

int main() 
{
	scanf("%d %d", &N, &M); //leemos numero de vacas y numero de operaciones
	while(M--)
	{
		scanf("%d %d %d", &Op, &S, &E); //leemos tipo de operacion y limites
		if(!Op) //si la operacion es igual 0 entonces switcheamos del rango [i hasta j]
			for(i = S - 1; i < E ; i++)
				lights[i] = (lights[i]) ? 0 : 1;
		else //si es 1 entonces contamos luces prendidas del rango [i hasta j]
		{
			cont = 0; //reinicializamos contador para el caso de conteo
			for(i = S - 1; i < E ; i++)
				if(lights[i]) cont++; //Si la luz esta prendida aumenta el contador
			printf("%d\n", cont);
		}
	}
	return 0;
}