#include <cstdio>
#include <cmath>
using namespace std;
/*
* Autor: Angel Jaime
* 2731 - Coco-Bits and the Well. COJ
*
* Geometria basica. Basicamente aqui hay que deducir, conociendo el area del cuadrado y del circulo,
* que si nos proporcionan el lado de un cuadrado, este equivaldra al diametro del circulo inscrito,
* por lo tanto bastara con dividir el lado entre 2, para obtener el radio. Una vez hecho esto, podremos
* obtener el area pedida en el problema tan solo elaborando una pequeña formulita que obtenga el area
* del cuadrado, y le reste el area del circulo. De aqui el mayor problema viene en la presicion que se le
* de a Pi (calculandola con la arcotangente, o dandole unos 10 decimales de PI basta)
*/
int T;
double l, radius, area; //Lado, radio y area a calcular
double const PI = atan(1) * 4; //Obtenemos valor mas preciso posible de PI

int main() 
{
	scanf("%d", &T); //Leemos el numero de casos
	while(T--) //Mientras se pueda seguir decrementado hasta llegar a 0
	{
		scanf("%lf", &l); //Leemos el lado 
		radius = l / 2.0;  //obtenemos el radio (Lado = Diametro, por lo tanto, Lado / 2 = radio)
		area = (l * l) - PI * (radius * radius); //Plasmamos la formula (Area Pedida = Area Cuadrado - Area Circulo)
		printf("%.2lf\n", area); //Impresion y formateo a 2 decimales 
	}
	return 0;
}