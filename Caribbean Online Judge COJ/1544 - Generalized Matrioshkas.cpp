#include <iostream>
#include <stack>
#include <cstring>
#include <string>
#include <sstream>
#include <cstdlib>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define STACK stack<pair<int, int> >
#define PUSH(s, m) s.push(m)
#define POP(s) s.pop()
#define SETTRUE(f) f = true
#define SETFALSE(f) f = false
using namespace std;

string line;
int m;
bool flag1, flag2;

int main()
{
    while(getline(cin, line))
    {
        istringstream parsing(line);
        STACK matrioshkas;
        SETFALSE(flag1);
        SETTRUE(flag2);
        while(parsing >> m && flag2)
        {
            SETTRUE(flag1);
            if(m < 0)
            {
                m = labs(m);
                if(!matrioshkas.empty())
                {
                    (matrioshkas.top().second <= m) ? SETFALSE(flag2) : matrioshkas.top().second -= m;
                }
                PUSH(matrioshkas, make_pair(m, m));
            }
            else
            {
                if(matrioshkas.empty() || matrioshkas.top().first != m)
                    SETFALSE(flag2);
                else
                    POP(matrioshkas);
            }
        }
        if(!flag1 || !matrioshkas.empty())
            SETFALSE(flag2);
        cout << ((flag2) ? ":-) Matrioshka!\n" : ":-( Try again.\n");
    }
    return 0;
}