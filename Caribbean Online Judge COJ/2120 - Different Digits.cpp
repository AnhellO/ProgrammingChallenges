#include <cstdio>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#define FOR(i, a ,b, c) for(i = a ; i <= b ; i += c)
using namespace std;

int i, j, k, cont;
string temp;
bool unique_chars(string);

int main() 
{
	while(scanf("%d %d", &i, &j) != EOF)
	{
		cont = 0;
		FOR(k, i, j, 1)
		{
			stringstream ss;
			ss << k;
			if(unique_chars(ss.str()))
				cont++;
		}
		printf("%d\n", cont);
	}
	return 0;
}

bool unique_chars(string str)
{
	int k;
	char prev;
	sort(str.begin(), str.end());
	FOR(k, 0, str.length(), 1)
	{
		if(str[k] == prev)
			return false;
		prev = str[k];
	}
	return true;
}