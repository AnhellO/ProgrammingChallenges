#include <cstdio>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i <= b ; i += c)
#define WHILE(n) while(n--)
#define FILL(N, arr) std::fill_n(arr, N, 0)
using namespace std;

long long int N, U, Q, i, k, u, v, mod = 10000;
void update(long long int, long long int, long long int[]);
void rangeSumatory(long long int, long long int[]);
long long int getRangeSum(long long int, long long int, long long int[]);

int main()
{
	scanf("%lld %lld %lld", &N, &U, &Q);
	long long int cells[N];
	FILL(N, cells);
	WHILE(U)
    {
        scanf("%lld %lld", &i, &k);
        update(i, k, cells);
    }

    rangeSumatory(N, cells);
    //FOR(j, 0, N - 1, 1)
    //{
    //	printf("%llu ", cells[j]);
    //}

    WHILE(Q)
    {
        scanf("%lld %lld", &u, &v);
        u--, v--;
        printf("%lld\n", getRangeSum(u, v, cells));
    }
	return 0;
}

void update(long long int i, long long int k, long long int cells[])
{
    i -= 2;
    if (i >= 0 && i < N)
    {
        cells[i] += k;
    }
    i++;
    if (i >= 0 && i < N)
    {
        cells[i] += (k + 1);
    }
    i++;
    if (i >= 0 && i < N)
    {
        cells[i] += k;
    }
}

void rangeSumatory(long long int N, long long int cells[])
{
    int i;
    FOR(i, 1, N, 1)
    {
    	cells[i] = cells[i] + cells[i - 1];
    }
}

long long int getRangeSum(long long int u, long long int v, long long int cells[])
{
    return (u) ? (cells[v] - cells[u - 1]) % mod : cells[v] % mod;
}
