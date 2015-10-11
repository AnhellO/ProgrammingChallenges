#include <cstdio>
#include <cstring>
using namespace std;

int N, M, i, j, W[20000], D[20000], f[20000];;

int main()
{
	scanf("%d %d", &N, &M);
	memset(W, 0, sizeof(W));
        memset(D, 0, sizeof(D));
        memset(f, 0, sizeof(f));
	for(i = 0 ; i < N ; i++) scanf("%d %d", &W[i], &D[i]);
	for(i = 0 ; i < N ; i++)
		for(j = M ; j >= W[i] ; j--)
			if(f[j] < (f[j - W[i]] + D[i])) f[j] = f[j - W[i]] + D[i];
	printf("%d\n", f[M]);
	return 0;
}