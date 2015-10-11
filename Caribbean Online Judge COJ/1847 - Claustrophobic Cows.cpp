#include <cstdio>
#include <vector>
#include <cmath>
using namespace std;

int N, i, j, id1, id2;

struct cow
{
	int x, y, id;
};

double distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
}

int main()
{
	scanf("%d", &N);
	vector<cow> v(N);
	double d = 0.0, min = 1000000000000;
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d %d", &v[i].x, &v[i].y);
		v[i].id = i + 1;
	}
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j < N ; j++)
		{
			if(i != j)
			{
				d = distance(v[i].x, v[i].y, v[j].x, v[j].y);
				min = (d < min) ? d : min;
				if(min == d) id1 = v[i].id, id2 = v[j].id;
			}
		}
	}
	(id1 < id2) ? printf("%d %d\n", id1, id2) : printf("%d %d\n", id2, id1);
	return 0;
}