#include <iostream>
#include <cstring>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

char kolone1[31], kolone2[31], order[61];
int N1, N2, T, i, moves;

int main()
{
    cin >> N1 >> N2 >> kolone1 >> kolone2 >> T;

    FOR(i, 0, N1, 1)
    {
        moves = N1 - i - 1;
        moves += min(max(T - i, 0), N2);
        order[moves] = kolone1[i];
    }

    FOR(i, 0, N2, 1)
    {
        moves = N1 + i;
        moves -= min(max(T - i, 0), N1);
        order[moves] = kolone2[i];
    }

    order[N1 + N2] = '\0';
    cout << order << "\n";
    return 0;
}