#include <cstdio>
#include <cmath>
using namespace std;

int K;
double binet(int);

int main() 
{
	scanf("%d", &K);
	if(K == 1)
		printf("%d %d\n", 0, 1);
	else if(K == 2)
		printf("%d %d\n", 1, 1);
	else
		printf("%d %d\n", (int)binet(K - 1), (int)binet(K));
	return 0;
}

double binet(int n)
{
    static const double phi = (1 + sqrt(5)) * 0.5;
    return round((pow(phi, n) - pow(1 - phi, n)) / sqrt(5));
}