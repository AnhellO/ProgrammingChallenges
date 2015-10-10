#include <iostream>
#include <cstdio>
using namespace std;

#define CICLO(i, a, b, c) for(i = a ; i < b ; i += c)
int columns, n, m, i, rows;
string s, r;

int main()
{
     int columns,n,m;
     while(scanf("%d", &columns) != EOF)
     {
        if(!columns) break;

        cin >> s;
        r = s;
        rows = s.size() / columns;
        CICLO(i, 0, s.size(), 1)
        {
            m = i / columns;
            (m % 2 == 0) ? n = i % columns : n = columns - 1 - i % columns;
            r[n * rows + m] = s[i];
        }
        cout << r << endl;
     }
     return 0;
}