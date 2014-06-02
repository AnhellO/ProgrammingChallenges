#include <iostream>
using namespace std;
/*
* Autor: Angel Jaime
* 2185 - A ? B. COJ
* 
* Problema mas sencillo del concurso y de la categoria novatos, basta con leer los valores de
* entrada y mandar imprimir los resultados en el orden pedido con cada operador
*/
int a, b;

int main() 
{
	cin >> a >> b; //Solamente leemos los valores
	cout << a + b << '\n'; //Se imprimen cada uno de los resultados pedidos
	cout << a - b << '\n';
	cout << a * b << '\n';
	cout << a / b << '\n';
	cout << a % b << '\n';
	return 0;
}