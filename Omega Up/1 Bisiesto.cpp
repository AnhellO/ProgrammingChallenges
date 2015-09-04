#include <cstdio>
#define LECT(t) while(t--)
using namespace std;

int t, year;

int main()
{
	scanf("%d", &t);
	LECT(t)
	{
		scanf("%d", &year);
		printf("%c\n", ((year % 4 == 0 && year % 100) || !(year % 100 && year % 400)) ? 'S' : 'N');
	}
	return 0;
}