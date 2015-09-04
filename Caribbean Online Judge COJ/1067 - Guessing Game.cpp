#include <iostream>
using namespace std;

int N, lower = 0, higher = 11;
string guess;

int main()
{
	while(cin >> N)
	{
		if(!N) break;
		cin >> guess >> guess;
		if(guess == "high")
		{
			if(higher > N)
				higher = N;
		}
		else if(guess == "low")
		{
			if(lower < N)
				lower = N;
		}
		else
		{
			cout << ((N < higher && N > lower) ? "Stan may be honest\n" : "Stan is dishonest\n");
			lower = 0, higher = 11;
		}
	}
	return 0;
}