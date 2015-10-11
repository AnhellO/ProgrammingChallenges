#include <cstdio>
#include <algorithm>
using namespace std;

int out[3];

int main() 
{
	while(scanf("%d %d %d", &out[0], &out[1], &out[2]) != EOF && (out[0] && out[1] && out[2]))
	{
		if(out[0] == out[1] && out[0] == out[2] && out[0] == 13) 
		{
			printf("*\n");
			continue;
		}
		if(out[0] == out[1] && out[0] == out[2] && out[0] < 13) 
		{
			out[0]++, out[1]++, out[2]++;
			sort(out, out + 3);
			printf("%d %d %d\n", out[0], out[1], out[2]);
			continue;
		}
		if(out[0] == out[1] && out[0] != out[2])
		{
			if(out[2] < 13)
			{
				if(out[2] + 1 != out[0] && out[2] + 1 <= 13) out[2]++;
				else
				{
					if(out[2] + 2 <= 13) out[2] += 2;
					else
					{
						if(out[0] < 13) out[0]++, out[1]++, out[2] = 1;
						else out[0] = out[1] = out[2] = 1;
					}
				}
			}
			else
			{
				if(out[0] < 13) out[0]++, out[1]++, out[2] = 1;
				else printf("1 1 1\n");
			}
			sort(out, out + 3);
			printf("%d %d %d\n", out[0], out[1], out[2]);
		}
		else if(out[0] == out[2] && out[0] != out[1])
		{
			if(out[1] < 13)
			{
				if(out[1] + 1 != out[0] && out[1] + 1 <= 13) out[1]++;
				else
				{
					if(out[1] + 2 <= 13) out[1] += 2;
					else
					{
						if(out[0] < 13) out[0]++, out[1] = 1, out[2]++;
						else out[0] = out[1] = out[2] = 1;
					}
				}
			}
			else
			{
				if(out[0] < 13) out[0]++, out[1] = 1, out[2]++;
				else printf("1 1 1\n");
			}
			sort(out, out + 3);
			printf("%d %d %d\n", out[0], out[1], out[2]);
		}
		else if(out[1] == out[2] && out[1] != out[0])
		{
			if(out[0] < 13)
			{
				if(out[0] + 1 != out[1] && out[0] + 1 <= 13) out[0]++;
				else
				{
					if(out[0] + 2 <= 13) out[0] += 2;
					else
					{
						if(out[1] < 13) out[0] = 1, out[1]++, out[2]++;
						else out[0] = out[1] = out[2] = 1;
					}
				}
			}
			else
			{
				if(out[1] < 13) out[0] = 1, out[1]++, out[2]++;
				else printf("1 1 1\n");
			}
			sort(out, out + 3);
			printf("%d %d %d\n", out[0], out[1], out[2]);
		}
		else if(out[0] != out[1] && out[1] != out[2] && out[0] != out[2]) printf("1 1 2\n");
	}
	return 0;
}