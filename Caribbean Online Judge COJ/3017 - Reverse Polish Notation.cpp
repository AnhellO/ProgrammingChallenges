#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>
#include <cctype>
using namespace std;

string s;
vector<string> sections;

int toInt(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

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

int prefix(vector<string> sections)
{
	int i, op1, op2;
	stack<int> ops; 
	
	for(i = 0 ; i < sections.size() ; i++)
	{
		if(!ispunct(sections[i][0])) ops.push(toInt(sections[i]));
		else
		{
			//cout << sections[i] << ' ';
			op1 = ops.top();
			ops.pop();
			op2 = ops.top();
			ops.pop();
			if(sections[i] == "+") ops.push(op2 + op1);
			else if(sections[i] == "-") ops.push(op2 - op1);
			else ops.push(op2 * op1);
		}
		//cout << ops.top() << ' ';
	}
	return ops.top();
}

int main()
{
	while(getline(cin, s))
	{
		stack<int> ops;
		sections = split(s, " ");
		if(sections.size() == 1) cout << sections[0] << '\n';
		else if(sections.size() == 3)
		{
			if(sections[2] == "+") cout << toInt(sections[0]) + toInt(sections[1]) << '\n';
			else if(sections[2] == "-") cout << toInt(sections[0]) - toInt(sections[1]) << '\n';
			else cout << toInt(sections[0]) * toInt(sections[1]) << '\n';
		}
		else
		{
			cout << prefix(sections) << '\n';
		}
	}
	return 0;
}