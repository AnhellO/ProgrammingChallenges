#include <cstdio>
using namespace std;

unsigned long long int n, m;

int main()
{
   scanf("%llu", &m);
   while(m--)
   {
       scanf("%llu", &n);
       printf("%llu\n", (n * n) - n + 2);
   }
   return 0;
}
