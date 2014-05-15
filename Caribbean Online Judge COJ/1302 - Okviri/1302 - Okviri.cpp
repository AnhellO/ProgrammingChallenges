#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int i;
string line, out[5];

int main() 
{
	out[0] = out[1] = out[2] = out[3] = out[4] = "";
	cin >> line;
	for(i = 1 ; i <= line.length() ; i++)
	{
		if(i % 3) out[0].append("..#.");	
		else out[0].append("..*.");
	}
	out[0].append(".\n");
	for(i = 1 ; i <= line.length() ; i++)
	{
		if(i % 3) out[1].append(".#.#");	
		else out[1].append(".*.*");
	}
	out[1].append(".\n");
	for(i = 1 ; i <= line.length() ; i++)
	{
		if(i % 3) 
		{
			if((i - 1) % 3) out[2].append("#.");
			else out[2].append("*.");
			out[2].push_back(line[i - 1]);
			out[2].push_back('.');
		}
		else 
		{
			out[2].append("*.");
			out[2].push_back(line[i - 1]);
			out[2].push_back('.');
		}
	}
	if(line.length() % 3) out[2].append("#\n");
	else out[2].append("*\n");
	out[2][0] = '#';
	cout << out[0] << out[1] << out[2] << out[1] << out[0];
	return 0;
}