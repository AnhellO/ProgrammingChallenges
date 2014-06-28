#include <cstdio>
#define MOD 1000000000
using namespace std;

int N, i, results[6] = {0};

void solve(int N)
{
	results[3] = results[0];
	results[4] = results[1];
	results[5] = results[2];
	switch(N)
	{
		case 0:
			results[0] = (2 * results[3] + 1) % MOD;
			results[1] = (2 * results[4]) % MOD;
			results[2] = (2 * results[5]) % MOD;
			break;
		case 1:
			results[0] = (results[3] + results[5]) % MOD;
			results[1] = (results[3] + results[4] + 1) % MOD;
			results[2] = (results[4] + results[5]) % MOD;
			break;
		case 2:
			results[0] = (results[3] + results[4]) % MOD;
			results[1] = (results[4] + results[5]) % MOD;
			results[2] = (results[3] + results[5] + 1) % MOD;
			break;
	}
	results[3] = results[4] = results[5] = 0;
}

int main()
{
	scanf("%d", &N);
	int elements[N];
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &elements[i]);
		elements[i] %= 3;
		solve(elements[i]);
	}
	printf("%d\n", results[0]);
	return 0;
}