#include <cstdio>
using namespace std;
 
int gA1, gA2, gB1, gB2, eA1, eA2, eB1, eB2, sum1, sum2;
 
int main()
{
	scanf("%d %d %d %d %d %d %d %d", &gA1, &gB1, &gA2, &gB2, &eA1, &eB1, &eA2, &eB2);
	sum1 = gA1 + gB1 + gA2 + gB2;
	sum2 = eA1 + eB1 + eA2 + eB2;
	printf((sum1 == sum2) ? "Tie\n" : ((sum1 > sum2) ? "Gunnar\n" : "Emma\n"));
	return 0;
}