#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;

int main() 
{
	scanf("%d", &N);
	FOR(i, 1, N + 1, 1)
		printf("%d: I am participating in the Engineer's day.\n", i);
	return 0;
}