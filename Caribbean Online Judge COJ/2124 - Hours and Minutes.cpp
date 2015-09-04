#include <cstdio>
using namespace std;

int A;

int main() 
{
	while(scanf("%d", &A) != EOF)
		printf("%c\n", (A % 6) ? 'N' : 'Y');
	return 0;
}