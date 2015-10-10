#include <iostream>
#include <cstdio>
using namespace std;

int t, n, contOdd, contEven, i;

int main()
{
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int num[n];
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d",&num[i]);
			if(num[i] % 2 == 0){
				contEven++;
                        }
			else{
				contOdd++;
                        }
		}
		printf("%d even and %d odd.\n", contEven, contOdd);
                contEven = contOdd = 0;
	}	
}