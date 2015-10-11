#include <cstdio>
using namespace std;

int t, a, b;
double area;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        printf("%.8f\n",area = (((a * b) / 4.0) / 4.0) * 3.0);
    }
    return 0;
}