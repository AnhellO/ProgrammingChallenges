#include <cstdio>
#include <vector>
using namespace std;

typedef unsigned long long int ULL;
ULL N, fibo[93];
vector<ULL> v;

void zeckendorf(ULL num)
{
	int i = 92;
	while(num > 0 && i > 0)
	{
		if(fibo[i] <= num)
        {
            num -= fibo[i];
            v.push_back(fibo[i]);
            i--;
        }
        i--;
    }
}

int main()
{
	fibo[0] = fibo[1] = 1;
	for(int i = 2 ; i < 93 ; i++) fibo[i] = fibo[i - 2] + fibo[i - 1];
	while(scanf("%llu", &N) != EOF)
	{
		v.clear();
		zeckendorf(N);
		printf("%llu = %llu", N, v[v.size() - 1]);
		for(int i = v.size() - 2 ; i > -1 ; i--) printf(" + %llu", v[i]);
		printf("\n");
	}
	return 0;
}