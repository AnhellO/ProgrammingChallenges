#include <cstdio>
#include <vector>
using namespace std;
/*
* Autor: Angel Jaime
* 2774 - FLOWERS - COJ
*
* Otro problema de implementacion, como veremos tendremos que formar un fila de flores plantadas
* por Bessie, donde al comienzo estaran vacias (representadas por un 0 en vacio), y despues tendremos
* que plantar tal flor en cada cierto intervalo de la fila: Si traducimos esto a codigo, hay que usar
* un arreglo, donde cada flor se represente por su numero dado y ocupe una casilla cada intervalo
* Basta con que cada vez que se lea el numero de flor y su intervalo para plantarla, se recorra
* el arreglo y, contando a partir del indice en que se comienza a plantarla, se hagan validaciones
* en cada intervalo dado por medio de un contador, donde coloquemos la posicion del limite del intervalo
* como ocupada, y donde reinicialicemos nuestro contador. Al final solo queda volver a recorrer
* el arreglo para contar todas las posiciones desocupadas en el arreglo
*/
int F, K, slot, place, i, cont;

int main() 
{
	scanf("%d %d", &F, &K);
	vector<int> row(F, 0); //Fila de flores y cantidad de flores a leer
	while(K--)
	{
		scanf("%d %d", &slot, &place); //se lee el comienzo de plantaje y el intervalo
		cont = 0; //Reinicializamos contador para cada flor
		row[slot - 1] = 1; //Colocamos la posicion de inicio como ocupada
		for(i = slot - 1 ; i < F ; i++) //y comenzamos a recorrer...
		{
			cont++; //Incrementamos el contador, y si este llega al valor del intervalo
			if(cont == place)//entonces colocamos la posicion actual de la fila de plantas como ocupada
			{				//y reiniciamos el contador
				row[i] = 1;
				cont = 0;
			}
		}
		/*for(i = 0 ; i < F ; i++)
			printf("%d ", row[i]);
		printf("\n");*/
	}
	cont = 0;
	for(i = 0 ; i < F ; i++) //Se recorre el arreglo de flores, y se verifica si la posicion actual esta vacia
		if(!row[i]) cont++; //si lo esta incrementamos el contador
	printf("%d\n", cont);
	return 0;
}