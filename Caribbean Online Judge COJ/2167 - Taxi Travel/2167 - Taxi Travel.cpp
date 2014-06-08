#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

int T, N, i, j, cont, val;

int main() 
{
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &N);
		cont = 0;
		vector<int> one, two, three;
		for(i = 0 ; i < N ; i++)
		{
			scanf("%d", &val);
			if(val == 1) one.push_back(val);
			else if(val == 2) two.push_back(val);
			else if(val == 3) three.push_back(val);
			else cont++;
		}
		while((!one.empty() && !three.empty()) || (one.empty() && !three.empty()))
		{
			if(one.empty() && !three.empty())
			{
				cont++;
				three.pop_back();
			}
			else if(!one.empty() && !three.empty())
			{
				cont++;
				one.pop_back();
				three.pop_back();
			}
			else break;
		}
		if(two.size() % 2 == 0)
		{
			cont += (two.size() / 2);
			two.clear();
		}
		else
		{
			while(two.size() > 1)
			{
				cont++;
				two.pop_back();
				two.pop_back();
			}
		}
		while((!one.empty() && !two.empty()) || (one.empty() && !two.empty()))
		{
			if(one.empty() && !two.empty())
			{
				cont++;
				two.pop_back();
			}
			else if(!one.empty() && !two.empty())
			{
				if(one.size() > 1)
				{
					cont++;
					one.pop_back();
					one.pop_back();
					two.pop_back();
				}
				else
				{
					cont++;
					one.pop_back();
					two.pop_back();
				}
			}
		}
		while(!one.empty())
		{
			val = 0;
			one.pop_back();
			val++;
			if(!one.empty())
			{
				one.pop_back();
				val++;
			}
			if(!one.empty())
			{
				one.pop_back();
				val++;
			}
			if(!one.empty())
			{
				one.pop_back();
				val++;
			}
			if(val) cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}