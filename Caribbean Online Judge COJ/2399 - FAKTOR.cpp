#include <cstdio>
using namespace std;

int A, L;

int main()
{
    scanf("%d %d", &A, &L);
    printf("%d\n", A * (L - 1) + 1);
    return 0;
}