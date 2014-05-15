#include <cstdio>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i <= b ; i += c)
using namespace std;

int N, L, i;
int swapTrains(int[], int);

int main()
{
    scanf("%d", &N);
    while(N--)
    {
        scanf("%d", &L);
        if(!L)
            printf("Optimal train swapping takes 0 swaps.\n");
        else if(L == 1)
        {
            int trains[1];
            scanf("%d", &trains[0]);
            printf("Optimal train swapping takes 0 swaps.\n");    
        }
        else
        {
            int trains[L];
            FOR1(i, 0, L, 1)
            {
                scanf("%d", &trains[i]);
            }
            printf("Optimal train swapping takes %d swaps.\n", swapTrains(trains, L));
        }
    }
    return 0;
}

int swapTrains(int trains[], int L)
{
    int i, j, aux, contSwaps = 0;
    FOR2(j, 1, L - 1, 1)
    {
        aux = trains[j];
        i = j - 1;
        while(i >= 0 && trains[i] > aux)
        {
            trains[i + 1] = trains[i];
            i--, contSwaps++;
        }
        trains[i + 1] = aux;
    }
    return contSwaps;
}