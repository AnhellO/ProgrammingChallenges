#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int w, h;
string line;
vector<string> sections;
vector<string> split(const string&, const string&);
int mcd(int, int);

int main()
{
	while(cin >> line)
	{
		sections = split(line, "x");
		w = atoi(sections[0].c_str());
		h = atoi(sections[1].c_str());
		if(h * 1.0 / w == 0.75)
			printf("Fill the screen.\n");
		else if(h * 1.0 / w > 0.75)
			printf("Horizontally.\n");
		else
			printf("Vertically.\n");
	}
	return 0;
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