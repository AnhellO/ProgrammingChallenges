#include <cstdio>
using namespace std;

#define FOR(i, a, b, c) for(i = a ; i <= b ; i += c)
int N, K;
int findZeros(int, int);

int main()
{
    scanf("%d %d", &N, &K);
    printf("%d\n", (K - 1) * findZeros(N - 1, K));
    return 0;
}

int findZeros(int N, int K)
{
    int p, q, aux, i;
    if(N == 1) return K;
    if(N == 2) return K * K - 1;

    p = K;
    q = K * K - 1;
    FOR(i, 3, N, 1)
    {
        aux = (K - 1) * (p + q);
        p = q;
        q = aux;
    }
    return q;
}
