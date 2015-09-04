#include <cstdio>
#define LECT(t) while(t--)
using namespace std;

int N, E, F, C, cont, temp;

int main()
{
    scanf("%d", &N);
    LECT(N)
    {
        scanf("%d %d %d", &E, &F, &C);
        cont = 0;
        E += F;
        temp = E;
        while(E >= C)
        {
            cont += E / C;
            E = E / C + E % C;
            if(E == temp)
            {
                cont = 0;
                break;
            }
            temp = E;
        }
        printf("%d\n", cont);
    }
    return 0;
}