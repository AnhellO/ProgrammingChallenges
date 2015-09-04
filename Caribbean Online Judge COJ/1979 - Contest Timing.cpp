#include <cstdio>
#define MAXN 16511
using namespace std;

unsigned long long int D, H, M, fMins;

int main() 
{
	scanf("%llu %llu %llu", &D, &H, &M);
	if(D < 11 || (D == 11 && H < 11) || (D == 11 && H == 11 && M < 11))
		printf("%d\n", -1);
	else
	{
		fMins = D * 1440;
		fMins += (H * 60);
		fMins += M;
		printf("%llu\n", fMins - MAXN);
	}
	return 0;
}