#include <cstdio>
#include <algorithm>
using namespace std;

struct point
{
	int x, y;
};

int N;
point p1, p2, p3;

int main()
{
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d %d %d %d %d %d", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
		printf((p3.x <= max(p1.x, p2.x) && p3.x >= min(p1.x, p2.x) && p3.y <= max(p1.y, p2.y) && p3.y >= min(p1.y, p2.y)) ? "Successful landing\n" : "Unsuccessful landing\n");
	}
	return 0;
}