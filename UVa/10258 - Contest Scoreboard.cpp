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
using namespace std;

struct Contestant {
	bool flag;
	int id, solved, tTime;
	map<int, int> ptries, ac;
};

bool predicate(const Contestant& a, const Contestant& b) {
	if(a.solved != b.solved) {
		return a.solved > b.solved;
	}
	if(a.tTime != b.tTime) {
		return a.tTime < b.tTime;
	}
	return a.id < b.id;
}

vector<string> split(string s, string regex) {
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

int toInt(string s) {
	stringstream ss(s);
	int n;
	ss >> n;
	return n;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	string line;
	cin >> T;
	getline(cin, line);
	getline(cin, line);
	vector<Contestant> scoreboard(101);
	while(getline(cin, line)) {
		if(line.empty()) {
			for(int i = 1 ; i < scoreboard.size() ; i++) {
				if(scoreboard[i].flag) {
					scoreboard[i].id = i;;
				}
			}
			sort(scoreboard.begin(), scoreboard.end(), predicate);
			for(int i = 0 ; i < scoreboard.size() ; i++) {
				if(scoreboard[i].flag) {
					cout << scoreboard[i].id << ' ' << scoreboard[i].solved << ' ' << scoreboard[i].tTime << '\n';
				}
			}
			cout << '\n';
			scoreboard.clear();
			scoreboard.resize(101);
		} else {
			vector<string> v = split(line, " ");
			int index = toInt(v[0]);
			scoreboard[index].flag = true;
			if(v.back() != "I" && v.back() != "C") {
				continue;
			}
			int problem = toInt(v[1]), t = toInt(v[2]);
			if(v.back() == "I") {
				if(!scoreboard[index].ac[problem]) {
					scoreboard[index].ptries[problem]++;
				}
			} else {
				if(!scoreboard[index].ac[problem]) {
					scoreboard[index].solved++;
					scoreboard[index].tTime += t;
					scoreboard[index].tTime += (scoreboard[index].ptries[problem] * 20);
					scoreboard[index].ac[problem] = 1;
				}
			}
		}
	}
	for(int i = 1 ; i < scoreboard.size() ; i++) {
		if(scoreboard[i].flag) {
			scoreboard[i].id = i;;
		}
	}
	sort(scoreboard.begin(), scoreboard.end(), predicate);
	for(int i = 0 ; i < scoreboard.size() ; i++) {
		if(scoreboard[i].flag) {
			cout << scoreboard[i].id << ' ' << scoreboard[i].solved << ' ' << scoreboard[i].tTime << '\n';
		}
	}
	return 0;
}