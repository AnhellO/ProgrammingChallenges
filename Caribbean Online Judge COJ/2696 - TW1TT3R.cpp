#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, m, i, j, tempA, tempB, cont, temp;

int main()
{
    scanf("%d %d", &n, &m);
    int ids[n][n];
    vector<int> twitts;
    vector<int> more_twitts;

    ciclo(i, 0, n)
    {
        ciclo(j, 0, n)
        {
            ids[i][j] = 0;
        }
    }

    ciclo(i, 0, m)
    {
        scanf("%d %d", &tempA, &tempB);
        ids[tempA - 1][tempB - 1] = 1;
    }
    
    ciclo(i, 0, n)
    {
        cont = 0;
        ciclo(j, 0, n)
        {
            if(ids[i][j] == 1)
                cont++;
        }
        twitts.push_back(cont);
    }
    
    ciclo(i, 0, n)
    {
        cont = 0;
        ciclo(j, 0, n)
        {
            if(j != i)
                if(twitts[i] >= twitts[j])
                    cont++;
        }
        if(cont == (n - 1))
            more_twitts.push_back(i + 1);
    }
    
    ciclo(i, 0, more_twitts.size())
    {
        if(i != more_twitts.size() - 1)
            printf("%d ", more_twitts[i]);
        else
            printf("%d\n", more_twitts[i]);
    }
    return 0;
}