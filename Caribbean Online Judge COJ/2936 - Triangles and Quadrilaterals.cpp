#include <cstdio>
using namespace std;
 
unsigned long long int N, M;
 
unsigned long long int combi(unsigned long long int N)
{
	if(N >= 2) return N * (N - 1) / 2;
	else return 0;
}
 
int main()
{
	while(scanf("%llu %llu", &N, &M) != EOF)
	{
		printf("Triangles: %llu\nQuadrilaterals: %llu\n\n", (combi(N) * M) + (combi(M) * N), combi(N) * combi(M));
	}
	return 0;
}