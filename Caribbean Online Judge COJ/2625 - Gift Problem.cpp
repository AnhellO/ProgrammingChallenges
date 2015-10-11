#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += 1)
int rows, columns, i, cont = 0;
string one = "OIE", two = "IEO", three = "EOI", out;

int main()
{
    scanf("%d %d", &rows, &columns);
    if(rows == 3 && columns == 3)
        cout << one << "\n" << two << "\n" << three << endl;
    else
    {
        ciclo(i, 0, columns - 3, 1)
        {
            if(cont == 0)
            {
                one.push_back('O');
                two.push_back('I');
                three.push_back('E');
            }
            else if(cont == 1)
            {
                one.push_back('I');
                two.push_back('E');
                three.push_back('O');
            }
            else if(cont == 2)
            {
                one.push_back('E');
                two.push_back('O');
                three.push_back('I');
            }
            cont++;
            if(cont == 3)
                cont = 0;
        }
        cont = 0;
        ciclo(i, 0, rows, 1)
        {
            if(cont == 0)
                cout << one << endl;
            else if(cont == 1)
                cout << two << endl;
            else if(cont == 2)
                cout << three << endl;
            cont++;
            if(cont == 3)
                cont = 0;
        }
    }
    return 0;
}