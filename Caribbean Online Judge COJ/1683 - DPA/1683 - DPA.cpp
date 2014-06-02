#include <cstdio>
using namespace std;
/*
* Autor: Angel Jaime
* 2732 - Coco-Bits and the Coco-Strings. COJ
*
* Problema de simulacion. Solamente hay que leer el numero de casos a procesar, y para cada caso
* realizar una sumatoria desde 1 hasta N - 1, de todos aquellos numeros entre los que N sea divisible,
* si esta sumatoria es menor a N, entonces imprimimos "Deficient", si es igual, imprimos "Perfect", de
* lo contrario imprimimos "Abundant". Aca en el caso de C++ se implemento una optimizacion de factores primos
* en la sumatoria, pero el cometido es igual, se puede resolver de la misma manera que en la solucion de Java
*/
int c, num;

int sumOfDivisors(int num) //Metodo para la sumatoria de divisores
{
    int p, i, prod = 1;
    for(i = 2 ; i * i <= num ; i++)
    {
        p = 1;
        while(num % i == 0)
        {
            p = (p * i) + 1;
            num = num / i;
        }
        prod *= p;
    }
    if(num > 1)
    {
        prod *= 1 + num;
    }
    return prod;
}

int main()
{
    scanf("%d", &c);
    while(c--) //Para cada caso a evaluar
    {
        scanf("%d", &num); //Leemos valor de N y evaluamos mandando llamar el metodo de la sumatoria directamente
        printf(((sumOfDivisors(num) - num) < num) ? "Deficient\n" : (((sumOfDivisors(num) - num) == num) ? "Perfect\n" : "Abundant\n"));
    }
    return 0;
}