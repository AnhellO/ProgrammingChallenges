#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

string s1, s2;

int levenshteinDistance(string s1, string s2)
{
	int i, j, corner, upper, N1 = s1.length(), N2 = s2.length();
	vector<int> v(N2 + 1);
	
	for(i = 0 ; i <= N2 ; i++) v[i] = i;
	
	for(i = 0 ; i < N1 ; i++)
	{
		v[0] = i + 1;
		corner = i;
		for(j = 0 ; j < N2 ; j++)
		{
			upper = v[j + 1];
			v[j + 1] = (s1[i] == s2[j]) ? corner : min(v[j], min(upper, corner)) + 1;
			corner = upper;
		}
	}
	return v[N2];
}

int main()
{
	cin >> s1 >> s2;
	cout << levenshteinDistance(s1, s2) << '\n';
	return 0;
}