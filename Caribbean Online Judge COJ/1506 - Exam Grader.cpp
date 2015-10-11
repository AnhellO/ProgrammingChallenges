#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int t, n, i;
double sum;
string answers, student;

int main()
{
    cin >> t >> answers >> n;
    while(n--)
    {
        cin >> student;
        sum = 0.0;
        ciclo(i, 0, t, 1)
        {
            if(student[i] == '#')
                continue;
            else if(student[i] != answers[i])
                sum -= 0.25;
            else if(student[i] == answers[i])
                sum++;
        }
        printf("%.2lf\n", sum);
    }
    return 0;
}