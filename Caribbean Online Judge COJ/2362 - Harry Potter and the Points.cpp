#include <cstdio>
using namespace std;

int m, n, i, out = 1;

int main()
{
    scanf("%d",&m);
    while(m--)
    {
    	scanf("%d",&n);
    	for(i = 1 ; i < n ; i++)
    	{
    	    out += 4 * i;
    	}
        printf("%d\n",out);
        out = 1;
    }
    return 0;
}