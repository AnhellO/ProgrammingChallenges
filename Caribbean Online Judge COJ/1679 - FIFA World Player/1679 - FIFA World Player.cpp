#include <iostream>
#include <cmath>
#include <utility>
#include <vector>
#include <algorithm>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct predicate
{
	bool operator()(const std::pair<string, double> &left, const std::pair<string, double> &right) 
    {
         return left.second > right.second;
    }
};
int N, PA, PJ, G, A, TA, TR, i;
typedef vector<pair<string, double> > V;

double factor(int PA, int PJ, int G, int A, int TA, int TR)
{
	return log(double(PA)) + PJ + 2 * G + A - (TA + 2 * TR);
}

int main() 
{
	cin >> N;
	V playersFactor(N);
	FOR(i, 0, N, 1)
	{
		cin >> playersFactor[i].first >> PA >> PJ >> G >> A >> TA >> TR;
		playersFactor[i].second = factor(PA, PJ, G, A, TA, TR);
	}
	sort(playersFactor.begin(), playersFactor.end(), predicate());
	cout << playersFactor[0].first << '\n';
	return 0;
}