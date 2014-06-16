#include <cstdio>
using namespace std;

int A, B;

int gcd(int a, int b)
{
	return !b ? a : gcd(b, a % b);
}

int main() 
{
	while(scanf("%d %d", &A, &B) != EOF) printf((gcd(B, A) != 1) ? "NO\n" : "YES\n");
	return 0;
}