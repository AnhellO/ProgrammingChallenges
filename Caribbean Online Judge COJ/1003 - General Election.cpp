#include <cstdio>
using namespace std;

int t, n, m, votes, i, j, major, winner, candidates[5] = {0};

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        for(i = 0 ; i < m ; i++)
        {
            for(j = 0 ; j < n ; j++)
            {
                scanf("%d",&votes);
                candidates[j] += votes;
                //printf("%d\n",candidates[j]);
            }
        }
        major = 0;
        for(i = 0 ; i < n ; i++)
        {
            if(candidates[i] > major)
            {
                major = candidates[i];
                winner = i + 1;
            }
            candidates[i] = 0;
        }
        printf("%d\n",winner);
    }
    return 0;
}