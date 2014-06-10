#include <cstdio>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int values[3], out[3];
char sorting[3];

int main()
{
	scanf("%d %d %d", &values[0], &values[1], &values[2]);
	sort(values, values + 3);
	
	scanf("%s", &sorting);
	
	if(sorting[0] == 'A')
		out[0] = values[0];
	else if(sorting[0] == 'B')
		out[0] = values[1];
	else
		out[0] = values[2];
	
	if(sorting[1] == 'A')
		out[1] = values[0];
	else if(sorting[1] == 'B')
		out[1] = values[1];
	else
		out[1] = values[2];
		
	if(sorting[2] == 'A')
		out[2] = values[0];
	else if(sorting[2] == 'B')
		out[2] = values[1];
	else
		out[2] = values[2];
		
	printf("%d %d %d\n", out[0], out[1], out[2]);
	return 0;
}