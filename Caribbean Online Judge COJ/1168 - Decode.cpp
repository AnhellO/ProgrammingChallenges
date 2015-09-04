#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;

int K, i, j;
string key, encoded, temp;

int main() 
{
	cin >> key >> K >> encoded;
	K--, temp = key;
	pair<string, string> table("ABCDEFGHIJKLMNOPQRSTUVWXYZ", "");
	for(i = 0 ; i < K ; i++) table.second.push_back(' ');
	j = K;
	for(i = 0 ; i < key.length() ; i++)
	{
		if(j < 26) table.second.push_back(key[i]);
		else table.second[j - 26] = key[i];
		j++;
	}
	sort(temp.begin(), temp.end());
	j = 0;
	for(i = 0 ; i < 26 ; i++) 
		if(table.second[i] != ' ')  j++;
		else break;
	for(i = 65 ; i < 91 ; i++)
	{
		if(!binary_search(temp.begin(), temp.end(), i))
		{
			if(table.second.length() < 26) table.second.push_back(i);
			else
			{
				table.second[j] = i;
				j++;
			}
		}
	}
	//cout << table.first << '\n' << table.second;
	for(i = 0 ; i < encoded.length() ; i++)
		for(j = 0 ; j < 26 ; j++)
			if(encoded[i] == table.second[j])
				cout << table.first[j];
	cout << '\n';
	return 0;
}