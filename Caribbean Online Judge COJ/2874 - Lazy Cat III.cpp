#include <cstdio>
#include <vector>
using namespace std;

int G, A, R, gi, gj, ai, aj, aG, aA, sG = 0, sA = 0, i;
vector<int> garfield(100002, 0), anders(100002, 0);

int GCD(int a, int b)
{
	return (a == 0) ? b : GCD(b % a, a);
}

void setCoprimes(int G, int A)
{
	int i;
	garfield[0] = anders[0] = 0;
	for(i = 1 ; i < 100001 ; i++)
	{
		if(GCD(i, G) == 1) garfield[i] = 1;
		if(GCD(i, A) == 1) anders[i] = 1;
	}
}

void RSQ()
{
	for(i = 1 ; i < 100001 ; i++)
	{
		garfield[i] += garfield[i - 1];
		anders[i] += anders[i - 1];
	}
}

int main()
{
	scanf("%d %d %d", &G, &A, &R);
	setCoprimes(G, A);
	RSQ();
	while(R--)
	{
		scanf("%d %d %d %d %d %d", &gi, &gj, &ai, &aj, &aA, &aG);
		if(garfield[gj] - garfield[gi - 1] == aA) sA++;
		if(anders[aj] - anders[ai - 1] == aG) sG++;
		//printf("%d\n", anders[aj] - anders[ai - 1]);
	}
	printf((sG == sA) ? "Draw\n" : ((sG > sA) ? "Garfield wins\n" : "Anders wins\n"));
	//for(i = 0 ; i < 21 ; i++) printf("%d ", anders[i]);
	return 0;
}