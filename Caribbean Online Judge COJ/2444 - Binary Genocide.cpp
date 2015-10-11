#include <cstdio>
#include <vector>
using namespace std;

int n, i, contOdds = 0, ones, rest;

int main()
{
    while(scanf("%d", &n) != EOF)
    {
        vector <int> binary;
        ones = 0;
        while(n > 0)
        {
            rest = n % 2;
            n /= 2;
            binary.push_back(rest);
        }
        for(i = 0 ; i < binary.size() ; i++)
            if(binary[i] == 1)
                ones++;
        contOdds += (ones % 2 == 0) ? 1 : 0;
    }
    printf("%d\n", contOdds);
    return 0;
}