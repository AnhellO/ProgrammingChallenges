#include <cstdio>
using namespace std;

int n, i, out = 0;

int main()
{
    do
    {
    	scanf("%d",&n);
    	if(n == 0)
            break;
    	for(i = 1 ; i <= n ; i++)
    	{
    	    out += i * i;
    	}
        printf("%d\n",out);
        out = 0;
    }while(true);
    return 0;
}