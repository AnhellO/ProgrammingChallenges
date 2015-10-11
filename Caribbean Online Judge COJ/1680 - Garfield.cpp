#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int i;
string line, piece, out;
vector<string> sections;
vector<string> split(const string&, const string&);

int main()
{
    while(cin >> line >> piece)
    {
        out.clear();
        do
        {
            out.clear();
            sections = split(line, piece);
            ciclo(i, 0, sections.size())
                out.append(sections[i]);
            line = out;
        }while(out.find(piece) != std::string::npos);
        cout << out << endl;
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