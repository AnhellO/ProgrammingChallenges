#include <iostream>
#include <cstring>
#include <string>
#include <strings.h>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int i;
string line, aux;
string lineToLower(string);
string exist(string);

int main()
{
    while(getline(cin, line))
    {
        line = lineToLower(line);
        cout << exist(line);
    }
    return 0;
}

string lineToLower(string line)
{
    int i;
    FOR(i, 0, line.length(), 1)
    {
        line[i] = tolower(line[i]);
    }
    return line;
}

string exist(string line)
{
    return(line.find("problem") != std::string::npos) ? "yes\n" : "no\n";
}