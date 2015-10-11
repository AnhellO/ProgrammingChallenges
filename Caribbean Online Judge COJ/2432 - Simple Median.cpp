#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define salida(n) if(!n) break
#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, i;
double average;

int main()
{
    while(true)
    {
        scanf("%d", &n);
        salida(n);

        vector<int> numbers(n);
        ciclo(i, 0, n)
        {
            scanf("%d", &numbers[i]);
        }
        sort(numbers.begin(), numbers.end());
        if(n % 2 != 0)
            printf("%.1f\n", (double )numbers[numbers.size() / 2]);
        else
        {
            average = ((double )numbers[numbers.size() / 2] + (double )numbers[numbers.size() / 2 - 1]);
            printf("%.1f\n", average / 2.0);
        }
    }
    return 0;
}
