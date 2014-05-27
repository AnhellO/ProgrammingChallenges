#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

unsigned long long int N, M, q, l, r, i;

int main() 
{
	cin >> N;
	vector<unsigned long long int> stones(N), temp;
	for(i = 0 ; i < N ; i++) cin >> stones[i];
	temp = stones;
	sort(temp.begin(), temp.end());
	for(i = 1 ; i < N ; i++)
	{
		stones[i] += stones[i - 1];
		temp[i] += temp[i - 1];
	}
	cin >> M;
	while(M--)
	{
		cin >> q >> l >> r;
		l--, r--;
		cout << ((q == 1) ? (l ? stones[r] - stones[l - 1] : stones[r]) : (l ? temp[r] - temp[l - 1] : temp[r])) << '\n';
	}
	return 0;
}