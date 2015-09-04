#include <cstdio>
#include <cmath>
using namespace std;
/*
** Autor: Angel Jaime
** COJ
** 2439 Fractal
** Ad-Hoc, Arithmetic - Algebra
*/
int t, s, iter;
double l, power; //se declara el largo del segmento en Double para mayor precision (igual se puede manejar como entero)

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lf %d", &l, &s);
        iter = 0; //inicializamos la iteracion en 0, en la cual el fractal comienza
        power = 0.0; //inicializamos en 0 la cantidad de Cms que determinan la longitud de cada segmento, dependiendo la iteracion
	//Mientras la cantidad de tinta nos alcance para dibujar la N-esima iteracion
	//del Fractal....(no es acumulativa)
        while(power < s)
        {
	    //Validamos Caso = 0, si la longitud del fractal y la tinta son iguales a 1
	    //break y la iteracion seria la 0 (esto es opcional, yo lo coloque para no realizar el proceso)
            if(l == 1.0 && s == 1) 
            {
                iter = 1;
                break;
            }
            else
            {
                l /= 3.0; //Se divide la longitud del segmento entre 3, que es el momento en el que se 
			  //genera el cuadrado incompleto (3 lados) en cada segmento, esta reprensentara la longitud de cada segmento, que sera la misma siempre
                iter++; //Se incrementa la iteracion
                power = pow(5.0, iter) * l; //Y se calcula la longitud del Fractal en cms, obteniendo el numero total de segmentos del Fractal
                                            //en la N-esima iteracion y multiplicandolo por la longitud de cada segmento
            }
        }
        printf("%d\n", iter - 1); //Si ya Chingo a su madre la tinta...
    }
    return 0;
}
