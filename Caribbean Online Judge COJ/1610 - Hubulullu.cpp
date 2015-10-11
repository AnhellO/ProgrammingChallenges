#include <cstdio>
using namespace std;

int T, N, starter;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &N, &starter);
		printf((!starter) ? "Airborne wins.\n" : "Pagfloyd wins.\n");
	}
	return 0;
}