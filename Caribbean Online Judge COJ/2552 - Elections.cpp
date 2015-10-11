#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

struct greater
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};
#define CICLO(i, a, b, c) for(i = a ; i < b ; i += c)
int N, voteAmount = 0, i;

int main()
{
    scanf("%d", &N);
    vector<int> Vi(N);
    CICLO(i, 0, N, 1)
    {
        scanf("%d", &Vi[i]);
        voteAmount += Vi[i];
    }
    sort(Vi.begin(), Vi.end(), greater());
    if(Vi[0] >= (int)(voteAmount * 0.45))
        printf("%d\n", 1);
    else if(Vi[0] > voteAmount * 0.40)
    {
        CICLO(i, 1, N, 1)
        {
            if(!(Vi[0] - Vi[i] > (int)(voteAmount * 0.10)))
                break;
        }
        printf("%d\n", (i == N) ? 1 : 2);
    }
    else
        printf("%d\n", 2);
    return 0;
}