#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int i, rotate;
string line;

int main() 
{
	while(getline(cin, line))
	{
		if(line == "#") break;
		for(i = 0 ; i < line.length() - 1 ; i++)
		{
			rotate = line[line.length() - 1] - 65;
			if(isalpha(line[i]))
			{
				if(isupper(line[i]))
				{
					if(line[i] - rotate < 65) 
					{
						rotate -= (line[i] - 65);
						line[i] = 91 - rotate;
					}
					else line[i] -= rotate;
				}
				else
				{
					if(line[i] - rotate < 97) 
					{
						rotate -= (line[i] - 97);
						line[i] = 123 - rotate;
					}
					else line[i] -= rotate;
				}
			}
			cout << line[i];
		}
		cout << '\n';
	}
	return 0;
}