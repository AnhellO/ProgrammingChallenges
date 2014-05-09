#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int N, i;

int main() 
{
	scanf("%d", &N);
	vector<int> columns(N);
	FOR1(i, 0, N, 1)
		scanf("%d", &columns[i]);
	sort(columns.begin(), columns.end());
	printf("%d", columns[0]);
	FOR1(i, 1, columns.size(), 1)
		printf(" %d", columns[i]);
	printf("\n");
	return 0;
}