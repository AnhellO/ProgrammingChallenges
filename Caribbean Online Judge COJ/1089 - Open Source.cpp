#include <bits/stdc++.h>
using namespace std;

string s;
int i = -1, j, k;
set<string> erase;

struct course
{
	string name;
	set<string> m;
	int l;
};

bool validate(vector<course> v, int i, string str)
{
	int j, k;
	for(j = 0 ; j < i ; j++)
		for(set<string>::iterator it = v[j].m.begin() ; it != v[j].m.end() ; ++it)
			if(*it == str) return false;
	return true;
}

bool predicate(course c1, course c2)
{
	if(c1.l != c2.l) return c1.l > c2.l;
	return c1.name < c2.name;
}

int main()
{
	vector<course> v;
	while(getline(cin, s))
	{
		if(s == "0") break;
		if(isdigit(s[0]))
		{
			for(set<string>::iterator it = erase.begin() ; it != erase.end() ; ++it)
				for(j = 0 ; j < v.size() ; j++)
					v[j].m.erase(*it);
			for(j = 0 ; j < v.size() ; j++) v[j].l = v[j].m.size();
			sort(v.begin(), v.end(), &predicate);
			for(int j = 0 ; j < v.size() ; j++) cout << v[j].name << ' ' << v[j].l << '\n';
			v.clear();
			i = -1;
			continue;
		}
		if(isupper(s[0]))
		{
			course c;
			c.name = s;
			v.push_back(c);
			i++;
			continue;
		}
		if(validate(v, i, s)) v[i].m.insert(s);
		else erase.insert(s);
	}
	return 0;
}