#include <cstdio>
#include <cmath>
using namespace std;

int t, i;
const float pi = 3.141592654;
float L, final1, final2;
double l, d, r, Per, ap, At, Ap, c, x;

int main()
{
    scanf("%d", &t);
    for(i = 1 ; i <= t ; i++)
    {
        scanf("%f", &L);
        d = L / pi;
        r = d / 2;
        l = r;
        Per = 6 * l;
        ap = sqrt(pow(l, 2) - pow(l / 2,2 ));
        Ap = ((Per * ap) / 2) / 2;
        x = (d - l) / 2;
        c = sqrt(pow(l, 2) - pow(x, 2));
        At = (c * x) / 2;
        final1 = Ap + At;
        final2 = Ap - At;
        printf("Case %d\nRice: %.2f\nBeans: %.2f\n", i, final2, final1);
    }
    return 0;
}