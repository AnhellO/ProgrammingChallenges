#include <cstdio>
using namespace std;
 
double n1, n2, n3;
 
int main()
{
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    printf("MEDIA = %.1lf\n", ((n1 * 2.0) + (n2 * 3.0) + (n3 * 5.0)) / 10.0);
    return 0;
}