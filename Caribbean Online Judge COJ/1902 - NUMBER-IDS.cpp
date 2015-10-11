#include <cstdio>
#include <vector>
#include <iostream>
#include <cstring>
#include <string>
#define W(t) while(t--)
#define FOR1(i, a, b, c) for(i = a ; i >= b ; i -= c)
#define FOR2(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int t, i, j;
string gender, date, city, country, r, out;
vector<string> sections;

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
	scanf("%d", &t);
	W(t)
	{
		out = "";
		cin >> gender >> date >> city >> country >> r;
		out.append(gender);
		out.append("-");
		sections = split(date, "/");
		FOR1(i, sections.size() - 1, 0, 1)
		{	
			if(i == sections.size() - 1)
			{
				if(sections[i].length() == 1) out.append("000").append(sections[i]).append("-");
				else if(sections[i].length() == 2) out.append("00").append(sections[i]).append("-");
				else if(sections[i].length() == 3) out.append("0").append(sections[i]).append("-");
				else if(sections[i].length() == 4) out.append(sections[i]).append("-");
			}
			else
			{
				if(sections[i].length() == 1) out.append("0").append(sections[i]).append("-");
				else out.append(sections[i]).append("-");
			}
		}
		
		if(city.length() == 1) out.append("000").append(city).append("-");
		else if(city.length() == 2) out.append("00").append(city).append("-");
		else if(city.length() == 3) out.append("0").append(city).append("-");
		else out.append(city).append("-");
		
		if(country.length() == 1) out.append("00").append(country).append("-");
		else if(country.length() == 2) out.append("0").append(country).append("-");
		else out.append(country).append("-");
		
		if(r.length() == 1) out.append("000").append(r);
		else if(r.length() == 2) out.append("00").append(r);
		else if(r.length() == 3) out.append("0").append(r);
		else out.append(r);
		
		cout << out << '\n';
	}
	return 0;
}