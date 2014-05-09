#include <cstdio>
using namespace std;

int a1, a2, a3, aSum;

int main() 
{
	scanf("%d %d %d", &a1, &a2, &a3);
	aSum =  a1 + a2 + a3;
	if(a1 == 60 && a2 == 60 && a3 == 60 && aSum == 180) printf("Equilateral\n");
	else if(a1 != a2 && a2 != a3 && a1 != a3 && aSum == 180) printf("Scalene\n");
	else if((a1 == a2 || a1 == a3 || a2 == a3) && aSum == 180) printf("Isosceles\n");
	else printf("Error\n");
	return 0;
}