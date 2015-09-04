#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

int A, B, i, cont;

int notRepeated(vector<int> v, int i, int element)
{
	int j;
	FOR2(j, i, 0, 1)
		if(i != j)
			if(v[j] == element)
				return false;
	return true;
}

int main() 
{
	while(scanf("%d %d", &A, &B) != EOF && (A && B))
	{
		vector<int> alice(A), betty(B);
		cont = 0;
		FOR1(i, 0, A, 1) scanf("%d", &alice[i]);
		FOR1(i, 0, B, 1) scanf("%d", &betty[i]);
		if(A == B)
		{
			FOR1(i, 0, A, 1)
				if(notRepeated(alice, i, alice[i]) && !binary_search(betty.begin(), betty.end(), alice[i]))
					cont++;
		}
		else if(A < B)
		{
			FOR1(i, 0, A, 1)
				if(notRepeated(alice, i, alice[i]) && !binary_search(betty.begin(), betty.end(), alice[i]))
					cont++;
		}
		else
		{
			FOR1(i, 0, B, 1)
				if(notRepeated(betty, i, betty[i]) && !binary_search(alice.begin(), alice.end(), betty[i]))
					cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}