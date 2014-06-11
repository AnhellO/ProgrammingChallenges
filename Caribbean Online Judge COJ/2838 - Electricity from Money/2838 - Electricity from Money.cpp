#include <cstdio>
#include <cmath>
using namespace std;
/*
* Autor: Angel Jaime
* 2838 - Electricity from Money - COJ
*
* Problema con tecnica greedy y de larga codificacion. La posible solucion es que dada la cantidad
* de dinero leida (en valor double), se tomen los respectivos rangos dados en la tabla, y se haga la operacion contraria
* a la que es dada para la cantidad de dinero a pagar, conservando la cantidad de dinero restante en cada
* operacion para calcular la cantidad de watts siguientes. La cantidad de kilowatts equivaldra
* al dinero dado entre el costo por kilowatt del rango actual en el que se encuentra la cantidad
* de dinero. Si la cantidad de dinero se pasa del limite de un rango (que viene dado por la cantidad maxima
* de consumo de kilowatts para ese rango, por el costo de ese rango), entonces tomamos el siguiente c/kwh en consideracion,
* y asi sucesivamente se calcula para cada cantidad de dinero. Al final solo resta imprimir la cantidad
* de kilowatts en su representacion entera
*/
int T, i;
double M, kwh;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		kwh = 0.0; //para cada caso se reinicia la cantidad de kilowatts
		scanf("%lf", &M);
		if(M <= 9.0) //si la cantidad de dinero dada no se pasa del rango 1
		{
			kwh = (M / .09); //Se calcula el numero de kilowatts para el rango 1
		}
		else if(M > 9.0 && M <= 24.0) //si no se pasa del rango 2 y es mayor a la del rango 1
		{
			kwh = (9.0 / .09); //Se calcula el limite en dinero del rango 1
			M -= 9.0; //y se resta al dinero dadon
			kwh += (M / .3); //se suma lo restante en dinero del rango 2 entre el costo del rango 2
		}
		else if(M > 24.0 && M <= 44.0) //si no se pasa del rango 3 y es mayor a la del rango 2
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (M / .4);
		}
		else if(M > 44.0 && M <= 74.0) //si no se pasa del rango 4 y es mayor a la del rango 3
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (M / .6);
		}
		else if(M > 74.0 && M <= 114.0) //si no se pasa del rango 5 y es mayor a la del rango 4
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (M / .8);
		}
		else if(M > 114.0 && M <= 189.0) //si no se pasa del rango 6 y es mayor a la del rango 5
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (40.0 / .8);
			M -= 40.0;
			kwh += (M / 1.5);
		}
		else if(M > 189.0 && M <= 459.0) //si no se pasa del rango 7 y es mayor a la del rango 6
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (40.0 / .8);
			M -= 40.0;
			kwh += (75.0 / 1.5);
			M -= 75.0;
			kwh += (M / 1.8);
		}
		else if(M > 459.0 && M <= 1459.0) //si no se pasa del rango 8 y es mayor a la del rango 7
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (40.0 / .8);
			M -= 40.0;
			kwh += (75.0 / 1.5);
			M -= 75.0;
			kwh += (270.0 / 1.8);
			M -= 270.0;
			kwh += (M / 2.0);
		}
		else if(M > 1459.0 && M <= 13459.0) //si no se pasa del rango 9 y es mayor a la del rango 8
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (40.0 / .8);
			M -= 40.0;
			kwh += (75.0 / 1.5);
			M -= 75.0;
			kwh += (270.0 / 1.8);
			M -= 270.0;
			kwh += (1000.0 / 2.0);
			M -= 1000.0;
			kwh += (M / 3.0);
		}
		else //en caso de que allá llegado al costo limite por kilowatts
		{
			kwh = (9.0 / .09);
			M -= 9.0;
			kwh += (15.0 / .3);
			M -= 15.0;
			kwh += (20.0 / .4);
			M -= 20.0;
			kwh += (30.0 / .6);
			M -= 30.0;
			kwh += (40.0 / .8);
			M -= 40.0;
			kwh += (75.0 / 1.5);
			M -= 75.0;
			kwh += (270.0 / 1.8);
			M -= 270.0;
			kwh += (1000.0 / 2.0);
			M -= 1000.0;
			kwh += (12000.0 / 3.0);
			M -= 12000.0;
			kwh += (M / 5.0);
		}
		printf("%d\n", (int)kwh); //casteamos a int e imprimimos
	}
	return 0;
}