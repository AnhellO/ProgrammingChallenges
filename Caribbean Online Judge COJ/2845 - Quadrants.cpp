#include <cstdio>
using namespace std;

double x, y;

int main() 
{
	while(scanf("%lf %lf", &x, &y) != EOF)
	{
		if(!x && !y)
		{
			printf("AXIS\n");
			break;
		}
		else if((!x && y) || (x && !y)) 
		{
			printf("AXIS\n");
			continue;
		}
		if(x > 0.0 && y > 0.0) printf("Q1\n");
		else if(x > 0.0 && y < 0.0) printf("Q4\n");
		else if(x < 0.0 && y > 0.0) printf("Q2\n");
		else printf("Q3\n");
	}
	return 0;
}