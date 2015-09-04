#include <cstdio>
using namespace std;
 
double n1, n2;
 
int main()
{
    scanf("%lf %lf", &n1, &n2);
    printf("MEDIA = %.5lf\n", ((n1 * 3.5) + (n2 * 7.5)) / 11.0);
    return 0;
}