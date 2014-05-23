#include <iostream>
using namespace std;

int N, prob1, prob2, i, median;
char temp;
string shoot;

int main() 
{
	cin >> shoot;
	N = shoot.length();
	temp = shoot[N - 1];
	for(i = 0 ; i < N ; i++)
	{
            if(shoot[i] == '1')
            {
                prob1++;
                if(temp == '1') prob2++;
            }
            temp = shoot[i];
        }
        median = prob2 * N - prob1 * prob1;
        cout << ((!median) ? "EQUAL\n" : ((median < 0) ? "ROTATE\n" : "SHOOT\n"));
	return 0;
}
