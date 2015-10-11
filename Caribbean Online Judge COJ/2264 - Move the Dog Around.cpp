#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int N, M, X, Y, C, i, j;
char aux;

int main()
{
	scanf("%d %d %d %d %d", &N, &M, &X, &Y, &C);
	vector<pair<char, int> > commands(C);
	for(i = 0 ; i < C ; i++) scanf("%c%c %d", &aux, &commands[i].first, &commands[i].second);
	for(i = C - 1 ; i > -1 ; i--)
	{
		if(commands[i].first == 'N') X += commands[i].second;
		else if(commands[i].first == 'S') X -= commands[i].second;
		else if(commands[i].first == 'E') Y -= commands[i].second;
		else if(commands[i].first == 'W') Y += commands[i].second;
	}
	printf("%d %d\n", X, Y);
	return 0;
}