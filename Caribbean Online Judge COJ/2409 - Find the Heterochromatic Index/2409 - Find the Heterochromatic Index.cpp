#include <cstdio>
#include <cstdlib>
using namespace std;

int left, right, gatico[21];

int main() 
{
	scanf("%s %d %d", &gatico, &left, &right);
	printf("%s %d", gatico, abs(left - right));
	return 0;
}