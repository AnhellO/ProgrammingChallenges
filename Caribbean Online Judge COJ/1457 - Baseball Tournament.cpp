#include <cstdio>
using namespace std;

unsigned long long int N, K;

int main() 
{
	scanf("%llu %llu", &N, &K);
	printf("%llu\n", ((N * (N - 1)) / 2) * K);
	return 0;
}