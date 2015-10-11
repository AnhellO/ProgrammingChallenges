#include <cstdio>
#define MAXN 100001
using namespace std;

int S, B, L, R, i, j, left[MAXN], right[MAXN];

int main()
{
	while(scanf("%d %d", &S, &B) && (S && B))
	{
		for(i = 0 ; i < S + 1 ; i++)
		{
			left[i] = i - 1;
			right[i] = i + 1;
		}
		while(B--)
		{
			scanf("%d %d", &L, &R);
			(left[L] >= 1) ? printf("%d ", left[L]) : printf("* ");
			(right[R] <= S) ? printf("%d\n", right[R]) : printf("*\n");
			left[right[R]] = left[L];
			right[left[L]] = right[R];
		}
		printf("-\n");
	}
	return 0;
}