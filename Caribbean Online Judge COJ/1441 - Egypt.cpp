#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
/*
* Autor: Angel Jaime
* 1441 - Egypt. COJ
*
* Problema de geometria basica, solamente basta aplicar el bien conocido Teorema de Pitagoras (c^2 = a^2 + b^2)
* La entrada de datos se lee hasta que los valores de A, B y C sean 0, en este caso nos apoyamos de un ciclo infinito
* que haga break cuando esta condicion se cumpla, y asi termine el programa
* Para este problema los valores se leen en un arreglo que debemos ordenar para obtener el valor mayor
* que en este caso equivaldria al lado mayor, y este seria el valor de c.
* Ya solamente queda evaluar el Teorema de Pitagoras. Si este se cumple, entonces nuestro triangulo
* es un triangulo rectangulo e imprimos "right", de lo contrario, no lo es e imprimimos "wrong"
*/
int angles[3];

int main()
{   //Leemos cada valor por separado y los almacenamos en los 3 diferentes indices del arreglo
    while(scanf("%d %d %d", &angles[0], &angles[1], &angles[2])) //Ciclo infinito
    {
        if(!angles[0] && !angles[2] && !angles[3]) //Si los tres valores son igual a 0, termina
            break;
        sort(angles, angles + 3); //Ordenamos los valores con el metodo Sort
        printf((pow(angles[2], 2) == (pow(angles[0], 2) + pow(angles[1], 2))) ? "right\n" : "wrong\n"); //Evaluamos Teorema de Pitagoras
    }
    return 0;
}