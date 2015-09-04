#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
/*
* Autor: Angel Jaime
* 2563 - Comments Out - COJ
*
* Problema de manejo de cadenas. Una solucion optima es la propuesta a continuacion:
* Leer cada linea dada en la entrada, y para cada una:
* Primero debemos de validar si existe algun comentario, en caso de que no imprimimos la linea directamente
* pero si existen comentario, vamos a recorrerla hasta encontrar siempre un char de "#", y validar que el siguiente
* char equivalga tambien a un "@", dando a entender que se abre un comentario,
* almacenaremos la posicion donde se encontro esta apertura de comentario.
* Haremos lo mismo para los comentarios que cierran, validamos que encontremos un char de "@", y que el
* siguiente char sea un "#", y almacenamos su posicion en otro vector de posiciones, salvo que para
* el cierre de comentario la posicion en la que almacenaremos sera la iesima + 1
* Ya solo queda borrar aquel segmento del string utilizando el metodo erase de la libreria string
* y pasandole como limites el primer elemento del vector de comentarios abiertos como inicio,
* y el ultimo elemento del vector de cierre de comentarios como fin para delimitar que todo esto
* es el comentario principal. Ya despues solo queda imprimir la linea
*/
int i;
string line;
vector<int> loc1, loc2; //Vector de comentarios abiertos, y vector de comentarios cerrados respectivamente

int main()
{
    while(getline(cin, line))
    {
        loc1.clear(); //Los limpiamos para cada linea
        loc2.clear();
        if(line.find("#") != std::string::npos) //Si encontramos comentarios
        {
            for(i = 0 ; i < line.length() ; i++)
            {
                if(line[i] == '#' && line[i + 1] == '@') //Si es apertura de comentario, guardar la iesima
                {										//posicion en el vector de apertura de comentarios
                    loc1.push_back(i);
                }
                if(line[i] == '@' && line[i + 1] == '#') //Si es cierre, guardar la iesima + 1 posicion
                {										//en el vector de cierre de comentarios
                    loc2.push_back(i + 1);
                    i++;
                }
            }
            cout << line.erase(loc1[0], loc2[loc2.size() - 1] - loc1[0] + 1) << "\n"; //Borramos toda la parte de comentarios
        }																				//imprimiendo directamente el string resultante
        else //en caso de que no se hayan encontrado comentarios, imprimimos directamente
            cout << line << "\n";
    }
    return 0;
}
