#include <cstdio>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define VECTOR vector<int>
#define BREAK(a, b) if(!a && !b) break
using namespace std;

int A, D, i;

int main()
{
    while(scanf("%d %d", &A, &D) != EOF)
    {
        BREAK(A, D);

        VECTOR attackers(A), defenders(D);
        FOR(i, 0, A, 1)
        {
            scanf("%d", &attackers[i]);
        }
        FOR(i, 0, D, 1)
        {
            scanf("%d", &defenders[i]);
        }
        sort(attackers.begin(), attackers.end());
        sort(defenders.begin(), defenders.end());
        printf((attackers[0] < defenders[1]) ? "Y\n" : "N\n");
    }
    return 0;
}