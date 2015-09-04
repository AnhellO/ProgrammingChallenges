#include <cstdio>
using namespace std;

int n, squares, rectangles, i;

int main()
{
    while(scanf("%d", &n) != EOF)
    {
        squares = 0;
        rectangles = 0;
        for(i = 1 ; i <= n ; i++)
        {
            squares += i * i;
            rectangles += i * i * i;
        }
        printf("%d %d\n", squares, rectangles);
    }
    return 0;
}