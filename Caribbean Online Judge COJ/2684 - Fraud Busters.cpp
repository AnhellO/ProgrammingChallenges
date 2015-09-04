#include <bits/stdc++.h>
#define MAXN 12
using namespace std;

int n, i;
char code[MAXN], regC[MAXN];
vector<string> v;
bool flag;

int main()
{
	scanf("%s %d", code, &n);
	while(n--)
	{
		flag = true;
		scanf("%s", regC);
		for(i = 0 ; i < 10 ; i++)
		{
			if(code[i] == '*') continue;
			if(code[i] != regC[i])
			{
				flag = false;
				break;
			}
		}
		if(flag) v.push_back(regC);
	}
	printf("%d\n", v.size());
	for(i = 0 ; i < v.size() ; i++) cout << v[i] << '\n';
	return 0;
}