#include <cstdio>
using namespace std;

int N, res = 0;
char op[5];

int main() 
{
	while(scanf("%s %d", &op, &N) != EOF)
		res = (op[0] == 's') ? res + N : res - N;
	printf("resultado: %d\n", res);
	return 0;
}