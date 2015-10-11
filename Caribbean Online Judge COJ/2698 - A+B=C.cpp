#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int i, j, sum = 0;
char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char word[26];

int main()
{
    cin >> word;
    for(i = 0 ; i < sizeof(word) ; i++)
    {
        for(j = 0 ; j < sizeof(abc) ; j++)
        {
            if(abc[j] == word[i])
                sum += j + 1;
        }
    }
    printf("%d",sum);
    return 0;
}