#include <bits/stdc++.h>
using namespace std;

int T;
string n1, n2, res, c1, c2;

int toInt(string s)
{
	stringstream ss;
	int n;
	ss << s;
	ss >> n;
	return n;
}

int main()
{
	scanf("%d", &T);
	while(T--)
	{
		cin >> n1 >> c1 >> n2 >> c2 >> res;
		int new1 = toInt(n1), new2 = toInt(n2), result = toInt(res);
		if(!new2) { printf("No\n"); continue; }
		if(c1 == "+") printf((new1 + new2 == result) ? "Yes\n" : "No\n");
		else if(c1 == "-") printf((new1 - new2 == result) ? "Yes\n" : "No\n");
		else if(c1 == "*") printf((new1 * new2 == result) ? "Yes\n" : "No\n");
		else if(c1 == "/") printf((new1 / new2 == result) ? "Yes\n" : "No\n");
		else printf("No\n");
	}
	return 0;
}