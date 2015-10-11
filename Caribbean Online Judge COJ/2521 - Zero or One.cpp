#include <iostream>
#include <cstdio>
using namespace std;

int a, b, c;
char out;

int main()
{
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        out = (a != b && a != c) ? 'A' :
              (b != a && b != c) ? 'B' :
              (c != a && c != b) ? 'C' :
              '*';
        printf("%c\n",out);
    }
    return 0;
}