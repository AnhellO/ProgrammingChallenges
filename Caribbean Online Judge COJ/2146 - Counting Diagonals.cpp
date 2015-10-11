#include <cstdio>
using namespace std;

unsigned long long int D, V;

int main() 
{
	scanf("%llu %llu", &D, &V);
	printf(((V * (V - 3)) / 2 == D) ? "yes\n" : "no\n");
	return 0;
}