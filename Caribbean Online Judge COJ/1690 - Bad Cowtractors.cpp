#include <cstdio>
#include <algorithm>
#include <cstring>
#define MAX 20005
 
int N, M, i, padre[MAX];
struct Edge
{
    int origen, destino, peso;
    Edge(){}
    bool operator<(const Edge &e) const
    {
        return peso > e.peso;
    }
}arista[MAX];
Edge MST[MAX];

void MakeSet(int n)
{
	int i;
    for(i = 1 ; i <= n ; i++) padre[i] = i;
}
 
int Find(int x){
    return (x == padre[x]) ? x : padre[x] = Find(padre[x]);
}

void Union(int x, int y)
{
    padre[Find(x)] = Find(y);
}

bool sameComponent(int x, int y)
{
    if(Find(x) == Find(y)) return true;
    return false;
}
 
void Kruskal()
{
    int i, origen , destino , peso, total = 0, numAristas = 0;
    MakeSet(N);
    std::sort(arista, arista + M);
    for(i = 0 ; i < M ; i++)
    {
        origen = arista[i].origen;
        destino = arista[i].destino;
        peso = arista[i].peso;
        if(!sameComponent(origen, destino))
        {
            total += peso;
            MST[numAristas++] = arista[i];
            Union(origen, destino);
        }
    }
    if(N - 1 != numAristas)
    {
        printf("-1\n");
        return;
    }
    printf("%d\n", total);
}
 
int main()
{
    scanf("%d %d", &N , &M);
    for(i = 0 ; i < M ; i++)scanf("%d %d %d", &arista[i].origen, &arista[i].destino, &arista[i].peso);
    Kruskal();
    return 0;
}