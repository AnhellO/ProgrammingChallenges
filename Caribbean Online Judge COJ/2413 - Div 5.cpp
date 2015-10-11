#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int T, large;
char c[1001];
bool isDiv5(char[]);

int main()
{
    scanf("%d\n",&T);

    while(T--)
    {
        printf("%s\n",(isDiv5(c)) ? "YES" : "NO");
    }
    return 0;
}

bool isDiv5(char c[])
{
    gets(c);
    large = strlen(c);
    return ((c[large-1]) == '0' || (c[large-1]) == '5') ? true : false;
}