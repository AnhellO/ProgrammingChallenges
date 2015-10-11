#include <cstdio>
#define MAXN 75
using namespace std;

//DP sobre coeficiente binomial
//Basado en: "Programming Challenges", de Steven S. Skiena y Miguel A. Revilla, pag.133
unsigned long long int P, nCase, N;

unsigned long long int binomial_coefficient(unsigned long long int n, unsigned long long int m) 
{
	unsigned long long int bc[MAXN][MAXN];
	int i, j;
	for(i = 0; i <= n; i++) bc[i][0] = 1;
	for(j = 0; j <= n; j++) bc[j][j] = 1;
	for(i = 1; i <= n; i++)
		for(j = 1; j < i; j++)
			bc[i][j] = bc[i-1][j-1] + bc[i-1][j];

	return bc[n][m];
}

int main() 
{
	scanf("%llu", &P);
	while(P--)
	{
		scanf("%llu %llu", &nCase, &N);
		printf("%llu %llu\n", nCase, binomial_coefficient(9 + N, N));
	}
	return 0;
}