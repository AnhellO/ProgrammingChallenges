#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

unsigned int T, N, luckies[] = {7, 2, 3, 5}, i;

int main() 
{
	scanf("%u", &T);
	while(T--)
	{
		scanf("%u", &N);
		string number;
		while(N)
		{
			number.push_back(luckies[N % 4] + '0');
			if(N % 4 == 0) N--;
			N /= 4;
		}
		number = string(number.rbegin(), number.rend());
		for(i = 0 ; i < number.length() ; i++) printf("%c", number[i]);
		printf("\n");
	}
	return 0;
}