#include <cstdio>
using namespace std;
/*
* Autor: Angel Jaime
* 2322 - Electrical Outlets - COJ
*
* Problema de implementacion sencilla, uno de los problemas mas sencillos del concurso, todo es cuestion de analizar los casos
* dados y darse cuenta que para cada toma de corriente que usemos, si conectamos otra toma de corriente mas, entonces tendremos
* una conexion menos, salvo con el ultimo toma de corriente que ya no conecta otro mas. Podemos realizar una sumatoria de todas
* las conexiones de cada toma de corriente, y obtener un total de conexiones, pero si quitamos las N - 1 tomacorrientes dados
* (N - 1 ya que el ultimo queda con todas su conexciones libres), entonces obtendremos el total de conexiones libres que pide el problema
*/
int t, powerStrips, outlets, i, sum;

int main()
{
    scanf("%d", &t);
    while(t--)
    {
        sum = 0; //reinicializamos la sumatoria para cada caso
        scanf("%d", &powerStrips);
        for(i = 0 ; i < powerStrips ; i++)
        {
            scanf("%d", &outlets); //leemos numero de conexiones del tomacorriente actual y lo sumamos
            sum += outlets;
        }
        printf("%d\n", sum - (powerStrips - 1)); //Total de conexiones - (Total de tomacorrientes - 1)
    }
    return 0;
}
