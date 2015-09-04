#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#define MAX 1000000
using namespace std;

int N, population, i;
double radius;

struct City
{
	int x, y, p;
	double d;
};

bool cities_sorter(City const& lhs, City const& rhs) 
{
	return lhs.d < rhs.d;
}

double distancePtoP(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() 
{
	scanf("%d %d", &N, &population);
	vector<City> cities(N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d %d %d", &cities[i].x, &cities[i].y, &cities[i].p);
		cities[i].d = distancePtoP(0, 0, cities[i].x, cities[i].y);
	}
	sort(cities.begin(), cities.end(), &cities_sorter);
	for(i = 0 ; i < N ; i++)
	{
		if(population < MAX)
		{
			population += cities[i].p;
			radius = cities[i].d;
		}
		else break;
		//printf("%d %d %d %.4lf\n", cities[i].x, cities[i].y, cities[i].p, cities[i].d);
	}
	(population >= MAX) ? printf("%.7lf\n", radius) : printf("%d\n", -1);
	return 0;
}