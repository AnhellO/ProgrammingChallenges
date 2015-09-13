//Not Accepted: Not tried yet, some pending changes

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
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
#include <fstream>
#define INF 1000000000000
#define MAX 1000000
#define MOD 10000007
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

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
    /*ifstream file("database.in");
	if(file) freopen("database.in", "rt", stdin);
	ofstream output("database.out");
    output.close();*/
    int n, m;
    map<string, vector<pair<int, int> > > rc;
    string s, st;
    bool flag = true;
    cin >> n >> m;
    getline(cin, s);
    for(int i = 1 ; i <= n ; i++) {
        getline(cin, s);
        vector<string> sect = split(s, ",");
        for(int j = 1 ; j <= m ; j++) {
            rc[sect[j - 1]].push_back(make_pair(i, j));
        }
    }
    for(map<string, vector<pair<int, int> > >::iterator it = rc.begin() ; it != rc.end() ; ++it) {
        if(it->second.size() > 1) {
        	flag = false;
        }
        //cout << it->first << ' ' << it->second.size() << '\n';
    }
    if(flag) {
    	cout << "YES\n";
    } else {
    	cout << "NO\n";
    	bool flag = true;
    	for(map<string, vector<pair<int, int> > >::iterator it = rc.begin() ; it != rc.end() ; ++it) {
	       	if(it->second.size() > 1) {
                if(flag) {
                    cout << it->second[0].first;
                    flag = false;
                } else {
                    cout << it->second[0].first;
                }
	       	}
	    }
	    flag = true;
	    cout << '\n';
	    for(map<string, vector<pair<int, int> > >::iterator it = rc.begin() ; it != rc.end() ; ++it) {
	        if(it->second.size() > 1) {
                if(flag) {
                    cout << it->second[0].second;
                    flag = false;
                } else {
                    cout << it->second[0].second;
                }
	       	}
	    }
	    cout << '\n';
    }
    return 0;
}
