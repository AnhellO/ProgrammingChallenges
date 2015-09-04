#include <cstdio>
using namespace std;

int i;
float c, sumatory;

int main()
{
    while(scanf("%f", &c) != EOF)
    {
        if(!c)
            break;
        sumatory = 0.00;
        for(i = 2 ; ; i++)
        {
            sumatory += 1.00 / (float) i;
            if(sumatory == c || sumatory > c)
                break;
        }
        printf("%d card(s)\n", i - 1);
    }
    return 0;
}