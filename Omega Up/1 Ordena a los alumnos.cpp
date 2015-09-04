#include <cstdio>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int n, i;

int main()
{
	scanf("%d", &n);
	int students[n];
	FOR(i, 0, n, 1)
	{
		scanf("%d", &students[i]);
	}
	sort(students, students + n);
	reverse(students, students + n);
	FOR(i, 0, n, 1)
	{
		(i < n - 1) ? printf("%d ", students[i]) : printf("%d\n", students[i]);
	}
	return 0;
}