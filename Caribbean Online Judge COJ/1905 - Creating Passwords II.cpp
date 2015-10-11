#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <vector>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i >= b ; i -= c)
#define CL(v) v.clear()
using namespace std;

int N, i;
string line;
vector<string> sections;

int toInt(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}

vector <string> split(const string& str, const string& delimiter)
{
    vector <string> tokens;

    string::size_type lastPos = 0;
    string::size_type pos = str.find(delimiter, lastPos);

    while (string::npos != pos)
    {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + delimiter.size();
        pos = str.find(delimiter, lastPos);
    }

    tokens.push_back(str.substr(lastPos, str.size() - lastPos));
    return tokens;
}

int main() 
{
	getline(cin, line);
	N = toInt(line);
	W(N)
	{
		getline(cin, line);
		sections.clear();
		sections = split(line, " ");
		cout << sections[0][0] << sections[0][1];
		FOR(i, sections.size() - 1, 1, 1)
		{
			cout  << sections[i];
			if(i > 1) cout << '*';
		}
		cout << sections[0][2] << sections[0][3] << '\n';
	}
	return 0;
}