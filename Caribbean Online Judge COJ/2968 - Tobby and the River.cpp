#include <cstdio>
#include <algorithm>
using namespace std;
 
int A, dogs[6];
bool flag;
 
int main()
{
	scanf("%d", &A);
	while(A--)
	{
		scanf("%d %d %d %d %d %d", &dogs[0], &dogs[1], &dogs[2], &dogs[3], &dogs[4], &dogs[5]);
		sort(dogs, dogs + 6);
		flag = false;
		do
		{
			if(dogs[0] + dogs[1] + dogs[2] == dogs[3] + dogs[4] + dogs[5] ||
				dogs[0] + dogs[1] == dogs[2] + dogs[3] + dogs[4] + dogs[5] ||
				dogs[0] == dogs[1] + dogs[2] + dogs[3] + dogs[4] + dogs[5] ||
				dogs[0] + dogs[1] + dogs[2] + dogs[3] == dogs[4] + dogs[5] ||
				dogs[0] + dogs[1] + dogs[2] + dogs[3] + dogs[4] == dogs[5])
			{
				flag = true;
				break;
			}
		}while(next_permutation(dogs, dogs + 6));
		printf((flag) ? "Tobby puede cruzar\n" : "Tobby no puede cruzar\n");
	}
	return 0;
}
