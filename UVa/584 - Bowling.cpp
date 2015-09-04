#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <iomanip>
#include <utility>
using namespace std;
 
vector<string> split(string s, string regex)
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;
	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	string s;
	while(getline(cin, s) && s != "Game Over") {
		vector<string> v = split(s, " ");
		int plays = 0, contSpares = 0, contStrikes = 0, score = 0;
		bool flag = false;
		vector<string> spares, strikes;
		for(int i = 0 ; i < v.size() ; i++) {
			//cout << plays << ' ' << score << '\n';
			if(v[i] == "X") {
				plays++;
				score += 10;
				flag = false;
				if(plays < 10) {
					strikes.push_back(v[i + 1]);
					strikes.push_back(v[i + 2]);
				}
			} else if(v[i] == "/") {
				plays++;
				score += (10 - (v[i - 1][0] - '0'));
				flag = false;
				if(plays < 10) {
					spares.push_back(v[i + 1]);
				}
			} else {
				score += (v[i][0] - '0');
				if(flag) {
					plays++;
					flag = false;
				} else {
					flag = true;
				}
			}
		}
		for(int i = 0 ; i < strikes.size() ; i++) {
			if(strikes[i] == "X") {
				score += 10;
			} else if(strikes[i] == "/") {
				score += (10 - (strikes[i - 1][0] - '0'));
			} else {
				score += (strikes[i][0] - '0');
			}
			//cout << strikes[i] << ' ';
		}
		//cout << '\n';
		for(int i = 0 ; i < spares.size() ; i++) {
			if(spares[i] == "X") {
				score += 10;
			} else {
				score += (spares[i][0] - '0');
			}
			//cout << spares[i] << ' ';
		}
		cout << score << '\n';
	}
	return 0;
}