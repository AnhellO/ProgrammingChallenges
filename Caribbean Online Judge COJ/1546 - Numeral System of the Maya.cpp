#include <bits/stdc++.h>
using namespace std;

int N, val;
char str[20];
map<string, int> m;

void createMap()
{
	m["."] = 1;
	m[".."] = 2;
	m["..."] = 3;
	m["...."] = 4;
	m["-"] = 5;
	m[". -"] = 6;
	m[".. -"] = 7;
	m["... -"] = 8;
	m[".... -"] = 9;
	m["- -"] = 10;
	m[". - -"] = 11;
	m[".. - -"] = 12;
	m["... - -"] = 13;
	m[".... - -"] = 14;
	m["- - -"] = 15;
	m[". - - -"] = 16;
	m[".. - - -"] = 17;
	m["... - - -"] = 18;
	m[".... - - -"] = 19;
}

int main()
{
	createMap();
	while(scanf("%d", &N) && N)
	{
		getchar();
		N++;
		val = 0;
		while(N--)
		{
			gets(str);
			if(N == 7) val += (57600000 * m[str]);
			else if(N == 6) val += (2880000 * m[str]);
		    else if(N == 5) val += (144000 * m[str]);
			else if(N == 4) val += (7200 * m[str]);
			else if(N == 3) val += (360 * m[str]);
			else if(N == 2) val += (20 * m[str]);
			else val += m[str];
		}
		cout << val << '\n';
	}
	return 0;
}