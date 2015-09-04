#include <iostream>
using namespace std;
/*
* Autor: Angel Jaime
* 1312 - R2. COJ
*
* Segundo problema mas sencillo del concurso, tenemos originalmente la formula para el valor de S,
* donde S = (R1 + R2) / 2, pero en este caso conocemos S, y el valor que no conocemos es R2, basta
* con aplicar algo de algebra y despejar la formula para R2, quedando R2 = (S * 2) - R1
*/
int r1, s;

int main() 
{
	cin >> r1 >> s; //Leemos los valores de R1 y S
	cout << s * 2 - r1; //imprimimos el valor de R2
	return 0;
}