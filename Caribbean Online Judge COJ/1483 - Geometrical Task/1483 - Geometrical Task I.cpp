#include <iostream>
using namespace std;
/*
* Autor: Angel Jaime
* 1483 - Geometrical Task I. COJ
* 
* Problema basico de geometria, en C/C++ es mas facil lidiar con la lectura ya que iremos leyendo valor
* por valor, entonces bastaria con leer primero la figura, compararla y preguntar que figura es, y despues
* solamente leer el numero de valores indicados para cada figura y obtener el area
*/
string forma;
int A, B;

int main() 
{
	cin >> forma; //primero leemos y checamos de que figura estamos buscando obtener su area
	if(forma == "square") //Si es cuadrado solamente leemos un valor
	{
		cin >> A;
		cout << A * A << '\n';
	}
	else
	{
		cin >> A >> B; //Si no, leemos dos valores
		cout << A * B << '\n';
	}
	return 0;
}