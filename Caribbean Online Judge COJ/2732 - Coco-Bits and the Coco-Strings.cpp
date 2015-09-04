#include <iostream>
#include <cstring>
#include <string>
using namespace std;
/*
* Autor: Angel Jaime
* 2732 - Coco-Bits and the Coco-Strings. COJ
*
* Problema que involucra conocimiento de cadenas de caracteres. Los String o cadenas de caracteres
* no son mas que un arreglo del tipo de dato primitivo char.
* Para el problema, basta con leer el numero de casos pedido, y para cada caso a evaluar,
* leer la cadena proporcionada. Una vez hecho esto, recorremos el arreglo char por char y 
* preguntamos si el iesimo char en el que estamos en el ciclo for, es mayuscula
* o minuscula, y dependiendo el caso, lo convertimos a su valor contrario (Mayusculas a minusculas y viceversa).
* De ahi imprimos el char en el que estamos, ya con su nuevo valor, y terminando el ciclo for, imprimimos
* el respectivo salto de linea del caso en curso.
*/
int T, i;
string cc;

int main() 
{
	cin >> T;
	while(T--)
	{
		cc.clear();
		cin >> cc;
		for(i = 0 ; i < cc.length() ; i++)
		{
			cc[i] = (isupper(cc[i])) ? tolower(cc[i]) : toupper(cc[i]);
			cout << cc[i];
		}
		cout << '\n';
	}
	return 0;
}