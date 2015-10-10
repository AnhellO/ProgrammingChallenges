#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int N, G, i, j, n;

bool notFull(vector<int> v)
{
	sort(v.begin(), v.end());
	return v[0] == 0;
}

int main()
{
	scanf("%d %d", &N, &G);
	vector<int> rooms(N, 0);
	for(i = 0 ; i < G ; i++)
	{
		scanf("%d", &n);
		if(notFull(rooms))
		{
			for(j = i ; j < N && n != 0 ; j++)
			{
				if(rooms[j]== 0 && n >= 2) rooms[j] = 2, n -= 2;
				else if(rooms[j] == 0 && n == 1) rooms[j] = 1, n--;
			}
		}
		if(!notFull(rooms))
			for(j = 0 ; j < N ; j++)
				if(rooms[j] == 1 && n) rooms[j]++, n--;
	}
	for(i = 0 ; i < N ; i++) printf("%d\n", rooms[i]);
	return 0;
}