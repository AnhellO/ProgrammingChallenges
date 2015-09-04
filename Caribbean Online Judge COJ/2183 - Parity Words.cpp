#include <iostream>
#include <string>
#include <sstream>
using namespace std;
/*
* Autor: Angel Jaime
* 2183 - Parity Words - COJ
*
* Problema sencillo de manejo de strings, el caso fuerte esta al leer el string, ya que nos pueden
* dar espacios de entrada, entonces para esto hay que usar getline (cabe recordar que si se usa
* getline como metodo de entrada, se tendra que utilizar en todo el programa, por lo tanto tambien
* tendremos que leer la entrada de casos como string y luego convertirla a entera con la libreria
* stringstream)
* Solo hay que recorrer la cadena, y ver si el iesimo char es par o inpar, y, apoyandonos de dos
* contadores (respectivamente para pares e impares), llevaremos a cabo la cuenta
* Al final validamos lo pedido, y si el contador de pares es exclusivamente mayor, entonces la cadena
* es par, de lo contario es impar
*/
int T, i, contEven, contOdd;
string line;

int toInteger(string s) //Metodo para convertir a entero, usando la libreria stringstream
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

int main()
{
	getline(cin, line); //Leemos el numero de casos y lo convertimos a enteros
	T = toInteger(line);
	while(T--)
	{
		contEven = contOdd = 0; //Reinicializamos contadores para cada caso
		getline(cin, line);
		for(i = 0 ; i < line.length() ; i++) //Recorremos la cadena y validamos si el iesimo char es par o impar
			(line[i] % 2 == 0) ? contEven++ : contOdd++; //Y aumentamos el respectivo contador
		cout << ((contEven > contOdd) ? "Even\n" : "Odd\n");
	}
	return 0;
}