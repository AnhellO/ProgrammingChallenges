#include <iostream>
#include <cstring>
using namespace std;
/*
* Autor: Angel Jaime
* 1808 - Hamming Distance - COJ
*
* Problema más sencillo del concurso. Hay que leer la entrada de datos como un string, primero leyendo el string principal
* para validar que esta no sea una "X" (en caso de ser "X" termina el programa como lo pide el problema), y despues de validado esto
* se lee el segundo string. Por medio de un ciclo for procedemos a recorrer ambos strings (no hemos de preocuparnos por el limite
* del ciclo, ya que el problema especifica que ambas cadenas seran de la misma longitud, entonces solo basta con recorrer hasta el
* tamaño de la linea 1 o de la 2), y comparamos caracter por caracter ambas cadenas, en caso de diferir el iesimo char de ambas cadenas
* nos apoyaremos en un contador que ira aumentando este numero de diferencias. Al final imprimiremos el valor del contador, que equivale
* a la distancia de Hamming pedida en el problema
*/
int i, cont;
string line1, line2;

int main()
{
    while(true) //Usamos ciclo infinito
    {
        cin >> line1; //leemos primer cadena
        if(line1 == "X") break; //si la cadena es una "X" terminamos
        cin >> line2;
        cont = 0; //reinicializamos el contador
        for(i = 0 ; i < line1.length() ; i++)
        {
            if(line1[i] != line2[i]) //Si el iesimo char difiere, aumenta el contador en uno
                cont++;
        }
        cout << "Hamming distance is " << cont << ".\n";
    }
    return 0;
}
