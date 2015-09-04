#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c, val) for(i = a ; val < b ; i = c + 2)
#define PB(v, m) v.push_back(m)
using namespace std;

int C, H, W;

void drawTriangle(int H)
{
	int i, j, cont1 = 0, cont2 = H - 1;
	string out;
	FOR2(i, 1, H, i, cont1)
	{
		FOR(j, 0, cont2, 1) PB(out, ' ');
		FOR(j, 0, i, 1) PB(out, '*');
		if(cont1 + 1 != H) PB(out, '\n');
		cont1++, cont2--;
	}
	cout << out << "\n\n";
}

void drawParallelogram(int W, int H)
{
	int i, j, cont = abs(H - 1);
	string out;
	FOR(i, 0, H, 1)
	{
		FOR(j, 0, cont, 1) PB(out, ' ');
		FOR(j, 0, W, 1) PB(out, '*');
		cont--;
		if(cont + 1) PB(out, '\n');
	}
	cout << out << "\n\n";
}

void drawRectangle(int W, int H)
{
	int i, j;
	string out;
	FOR(i, 0, H, 1)
	{
		FOR(j, 0, W, 1) PB(out, '*');
		if(i + 1 != H) PB(out, '\n');
	}
	cout << out << "\n\n";
}

int main() 
{
	while(scanf("%d", &C) != EOF)
	{
		if(C == -1) break;
		else if(C == 1)
		{
			scanf("%d", &H);
			drawTriangle(H);
		}
		else if(C == 2)
		{
			scanf("%d %d", &W, &H);
			drawParallelogram(W, H);
		}
		else
		{
			scanf("%d %d", &W, &H);
			drawRectangle(W, H);
		}
	}
	return 0;
}