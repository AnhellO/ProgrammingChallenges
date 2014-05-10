#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;
/*
** Autor: Angel Jaime
** COJ
** 2520 Anime
** Solución por medio de diagrama de flujo, Sorting y Binary Search
*/

#define LECTURA(t) while(t--)
#define CICLO(i, a, b, c) for(i = a ; i < b ; i += c)
#define VECTOR vector<int>
#define RESTART(cont1, cont2) cont1 = cont2 = 0;
int t, N, P, J, F, contMustDelete, contMissed, i;

int main()
{
    scanf("%d", &t);
    LECTURA(t)
    {
        scanf("%d %d %d %d", &N, &P, &J, &F);
        //Creamos 4 vectores, el primero almacenara los capitulos grabados por Jaimie, el segundo los capitulos no grabados,
        //el tercero los capitulos a borrar, y el ultimo los capitulos de relleno (0 hasta F)
        VECTOR recorded(J), missed, mustDelete, fillers(F);
        //Se resetean los contadores para cada caso
        RESTART(contMustDelete, contMissed);
       CICLO(i, 0, J, 1)
        {
            scanf("%d", &recorded[i]);
            if(recorded[i] <= P)//Validamos si el capitulo ya fue visto por Pavel
            {
                mustDelete.push_back(recorded[i]); //De ser asi, agregamos el capitulo a la lista de capitulos a borrar
                contMustDelete++; //e incrementamos el contador
            }
        }
        sort(recorded.begin(), recorded.end());
        CICLO(i, 0, F, 1)
        {
            scanf("%d", &fillers[i]); //agregamos el capitulo de relleno al vector de capitulos de relleno
            //Aca va una parte importante del programa, validamos con doble AND, si en el vector de grabados se encuentra el capitulo
            //de relleno leido, si en el vector de capitulos a borrar aun no esta el capitulo de relleno, y si
            //el capitulo de relleno no fue visto por Pavel (para no agregar dos veces, aqui estaba el ultimo error).....
            if(binary_search(recorded.begin(), recorded.end(), fillers[i]) && !binary_search(mustDelete.begin(), mustDelete.end(), fillers[i]) && fillers[i] > P)
            {
                mustDelete.push_back(fillers[i]); //....agregamos el capitulo de relleno al vector de capitulos a borrar
                contMustDelete++; //e incrementamos el contador de capitulos a borrar
            }
        }
        sort(mustDelete.begin(), mustDelete.end());
        sort(fillers.begin(), fillers.end());
        CICLO(i, P + 1, N + 1, 1)
        {
            //De nuevo validamos con doble AND, si el capitulo no se encuentra entre los que grabo Jaimie,
            //si el capitulo no se encuentra en la lista de capitulos de relleno, y si el capitulo no se encuentra en
            //la lista de capitulos a borrar....
            if(!binary_search(recorded.begin(), recorded.end(), i) && !binary_search(fillers.begin(), fillers.end(), i) && !binary_search(mustDelete.begin(), mustDelete.end(), i))
            {
                missed.push_back(i);//....agregamos el capitulo a la lista de capitulos que faltaron
                contMissed++;//e incrementamos el contador de capitulos fallados
            }
        }
        if(contMissed)
        {
            printf("%d ", contMissed);
            CICLO(i, 0, missed.size(), 1)
            {
                if(i < missed.size() - 1)
                    printf("%d ", missed[i]);
                else
                    printf("%d\n", missed[i]);
            }
        }
        else
            printf("%d\n", 0);
        
		if(contMustDelete)
        {
            printf("%d ", contMustDelete);
            CICLO(i, 0, mustDelete.size(), 1)
            {
                if(i < mustDelete.size() - 1)
                    printf("%d ", mustDelete[i]);
                else
                    printf("%d\n", mustDelete[i]);
            }
        }
        else
            printf("%d\n", 0);
    }
    return 0;
}