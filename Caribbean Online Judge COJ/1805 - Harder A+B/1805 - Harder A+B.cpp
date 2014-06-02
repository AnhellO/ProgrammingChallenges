#include <iostream>
using namespace std;
/*
* Autor: Angel Jaime
* 1805 - Harder A+B. COJ
*
* Problema sencillo, aunque con maña. Se debe de seguir solamente la formula, pero hay que considerar
* los numeros maximos que el problema puede dar de entrada (10 ^ 9, equivalente a 1000000000).
* ¿Que pasa si para A y B damos este valor de 10 ^ 9?, tendriamos como resultado 4000000000, por lo tanto,
* si conocemos correctamente los valores limites que los tipos de datos primitivos de C++ pueden almacenar,
* podremos darnos cuenta que un 'int' tiene un rango maximo de 2,147,483,647 (inclusive)(2^31 -1), por lo tanto
* un int no puede almacenar ese resultado tan grande, resultando en un desborde de valor. Pero si conocemos
* el tipo 'unsigned int' que almacena 4,294,967,295 (inclusive), podremos de manera correcta
* resolver el problema del desborde de variables.
*/
unsigned int A, B;

int main() 
{
	cin >> A >> B; //Se leen valores
	cout << (A + B) + (A - B) + (B + A) + (B - A) << '\n'; //Imprimimos formula y salto de linea
	return 0;
}