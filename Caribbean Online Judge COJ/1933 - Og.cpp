#include <iostream>
using namespace std;
/*
* Autor: Angel Jaime
* 1933 - Og. COJ
*
* Poblema sencillo, solamente consiste en leer multiples veces la entrada de datos de las diferentes
* manos del canibal Og y luego imprimir la suma de sus hijos. Esto lo haremos por medio de un ciclo
* infinito que haga break cuando ambas manos leidas equivalgan a 0 (tal como lo pide la entrada)
*/
int L, R; //Mano 1 y mano 2

int main() 
{
	while(cin >> L >> R) //ciclo infinito, leemos manos antes de preguntar por valores
	{
		if(!L && !R) break; //Si los valores equivalen a 0, entonces haz break y termina
		cout << L + R << '\n'; //Si no, pasa directo a la suma y sigue con el ciclo
	}
	return 0;
}