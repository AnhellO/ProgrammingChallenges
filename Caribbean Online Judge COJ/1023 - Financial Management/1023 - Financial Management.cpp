#include <cstdio>
using namespace std;

int main()
{
    double val, sum = 0.0;

    for(int i = 0 ; i < 12 ; i++)
    {
        scanf("%lf",&val);
        sum += val;
    }
    printf("$%4.2f",(sum/12.0));
    return 0;
}