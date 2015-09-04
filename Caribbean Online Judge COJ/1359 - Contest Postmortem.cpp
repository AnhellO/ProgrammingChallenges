#include <cstdio>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define MAXN 100
using namespace std;

int C, P, i, j, points, cont, cont2 = 0, solved, contSolvedTwo;
char trash[MAXN];
bool flagUnsolved;

int main() 
{
	while(scanf("%d %d", &C, &P) != EOF && (C && P))
	{
		bool problems[P];
		FOR(i, 0, P, 1) problems[i] = false;
		points = contSolvedTwo = flagUnsolved = 0;
		printf("Contest %d: ", ++cont2);
		FOR(i, 0, C, 1)
		{
			scanf("%s", &trash);
			cont = 0;
			FOR(j, 0, P, 1)
			{
				scanf("%d", &solved);
				if(solved) cont++;
				if(!problems[j] && solved) problems[j] = true;
			}
			if(cont == P && !flagUnsolved) flagUnsolved = true;
			if(cont >= 2) contSolvedTwo++;
		}
		if(!flagUnsolved) points += 2;
		FOR(i, 0, P, 1)
			if(!problems[i])
				break;
		if(i == P) points++;
		printf("%d\n", ((contSolvedTwo * 100) / C > 90) ? points + 2 : points);
	}
	return 0;
}