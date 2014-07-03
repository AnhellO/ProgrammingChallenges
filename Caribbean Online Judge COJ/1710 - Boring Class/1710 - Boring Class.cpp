#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int T, N;

vector<int> primeFactors(int N)
{
	int i;
	vector<int> v;
    	while(N % 2 == 0)
    	{
        	N /= 2;
        	if(!binary_search(v.begin(), v.end(), 2)) v.push_back(2);
    	}
    	for(i = 3 ; i <= sqrt(N) ; i = i + 2)
    	{
        	while(N % i == 0)
        	{
            		N /= i;
            		if(!binary_search(v.begin(), v.end(), i)) v.push_back(i);
        	}
    	}
    	if(N > 2) v.push_back(N);
    	return v;
}

int main()
{
    	scanf("%d", &T);
    	while(T--)
    	{
	    	scanf("%d", &N);
        	vector<int> factors = primeFactors(N);
        	printf("%d\n", factors.size());
    	}
    	return 0;
}
