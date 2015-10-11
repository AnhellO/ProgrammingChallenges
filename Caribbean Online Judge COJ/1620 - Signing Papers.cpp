#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int n, k, i;
double d;

struct point
{
    int x, y;
};

double distancePtoP(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
   while(scanf("%d %d", &n, &k) != EOF)
   {
       d = 0.0;
       vector<point> p(n);
       for(i = 0 ; i < n ; i++) scanf("%d %d", &p[i].x, &p[i].y);
       for(i = 0 ; i < n - 1 ; i++) d += distancePtoP(p[i].x, p[i].y, p[i + 1].x, p[i + 1].y);
       printf("%.5lf\n", (d / 50.0) * (double)k);
   }
   return 0;
}