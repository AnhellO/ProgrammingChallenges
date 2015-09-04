#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct predicate
{
    bool operator()(const std::pair<string, int> &left, const std::pair<string, int> &right) 
    {
         return left.second > right.second;
    }
};
int N, five, ten, twenty, i;

bool areEqual(vector<pair<string, int> > totals)
{
	int i;
	FOR(i, 0, totals.size() - 1, 1)
		if(totals[i].second != totals[i + 1].second)
			return false;
	return true;
}

int main() 
{
	while(cin >> N)
	{
		if(N == -1) break;
		vector<pair<string, int> > totals(N);
		FOR(i, 0, N, 1)
		{
			cin >> totals[i].first >> five >> ten >> twenty;
			totals[i].second = five * 5 + ten * 10 + twenty * 20;
		}
		stable_sort(totals.begin(), totals.end(), predicate());
		cout << ((areEqual(totals)) ? "All have the same amount.\n" : totals[0].first.append(" has most, ").append(totals[totals.size() - 1].first).append(" has least money.\n"));
	}
	return 0;
}