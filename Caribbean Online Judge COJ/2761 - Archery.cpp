#include <cstdio>
using namespace std;

int N, contW = 0, contB = 0;
char chess[2];

int main() 
{
	scanf("%d", &N);
	while(N--)
	{
		scanf("%s", &chess);
		if(chess[1] % 2) (chess[0] % 2) ? contW++ : contB++;
		else (chess[0] % 2) ? contB++ : contW++;
	}
	printf("%d\n", (contB > contW) ? contB - contW : contW - contB);
	return 0;
}