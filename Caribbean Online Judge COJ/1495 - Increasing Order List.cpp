#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, i;
    scanf("%d",&n);
    int arr[n];
    for(i = 0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, arr + n);
    for(size_t j = 0 ; j < n ; j++)
    {
        printf("%d\n",arr[j]);
    }
    return 0;
}