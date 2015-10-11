#include <cstdio>
#include <string>
using namespace std;

int N;
string m = "moo";

string moo(int k, string s, string m)
{
	if(k == 25) return s;
	return moo(k + 1, s + m + s, m + "o");
}

int main()
{
	scanf("%d", &N);
	m = moo(1, m, m + "o");
	(N <= 100000000) ? printf("%c\n", m[N - 1]) : printf("o\n");
	return 0;
}