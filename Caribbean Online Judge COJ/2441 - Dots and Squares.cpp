#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T, R, C;

    scanf("%d",&T);
    do
    {
        T--;
        scanf("%d %d", &R, &C);
        ((R+C)%2!=0) ? printf("%s\n","First") : printf("%s\n","Second");
    }while(T!=0);
    return 0;
}