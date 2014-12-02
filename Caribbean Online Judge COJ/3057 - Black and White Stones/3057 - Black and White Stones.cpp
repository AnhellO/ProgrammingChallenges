#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int a, b, c, contB = 0, cont = 0, contB2 = 0, i, j, flag;
string line;

int main()
{
	cin >> a >> b >> line;
	c = a / (a - b);
	for(i = 0 ; i < line.size() ; i++)
		if(line[i] == 'B') contB++;
	for(i = 0 ; i < contB ; i++)
		if(line[i] == 'B') contB2++;
	flag = contB;
	i = contB - 1;
	while(true)
	{
		int k = line.find_first_of('B', i + 1) - line.substr(0, contB).find_last_of('W');
		i = line.find_first_of('B', i + 1);
		contB = line.substr(0, contB).find_last_of('W');
		if(contB2 == flag) break;
		else if(k <= c)
		{
			cont += ((a - b) * k);
			contB2++;
		}
		else
		{
			for(j = i ; j < line.size() ; j++)
				if(line[j] == 'B') cont += a;
			break;
		}
	}
	cout << cont << '\n';
	return 0;
}