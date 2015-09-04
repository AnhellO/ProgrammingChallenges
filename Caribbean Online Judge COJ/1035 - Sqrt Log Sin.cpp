#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;

int i, a, b, c, n, mod = 1000000;
vector<int> X;
double ii; 

int main(void)
{
        X.push_back(1);
        for(i = 1 ; i <= mod ; i++)
        {
                ii = (double)i;
                a = X[floor(ii - sqrt(ii))] % mod;
                b = X[floor(log(ii))] % mod;
                c = X[floor(ii * sin(ii) * sin(ii))] % mod;
                X.push_back((a + b + c) % mod);
        }
        while(scanf("%d", &n) != EOF && (n > -1))
        {
                printf("%d\n", X[n]);
        }
        return 0;
}