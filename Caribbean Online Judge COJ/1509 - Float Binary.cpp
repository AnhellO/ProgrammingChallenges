#include <bits/stdc++.h>
using namespace std;

int n, i;
double d;

void intToBinary(int n)
{
    if(n / 2 != 0) intToBinary(n / 2);
    printf("%d", n % 2);
}

void floatToBinary(double n)
{
	for(int i = 0 ; i < 20 ; i++)
	{
		n *= 2.0;
		printf("%d", (int)n);
		if((ceil(n) == n)) break;
		if(n > 1.0) n = n - floor(n);
	}
}

int main()
{
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lf", &d);
		intToBinary(d - (d - floor(d)));
		printf(".");
		floatToBinary(d - floor(d));
		printf("\n");
	}
	return 0;
}