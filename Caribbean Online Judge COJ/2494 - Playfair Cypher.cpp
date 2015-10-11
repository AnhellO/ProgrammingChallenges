#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cctype>
#include <utility>
#include <algorithm>
#define MAX 5
using namespace std;

int i, j, k;
string key, text, encrypted, abc = "ABCDEFGHIJKLMNOPRSTUVWXYZ";
pair<char, char> digraph;
char table[MAX][MAX];

bool found(char c) //To fill the matrix
{
	int i, j;
	for(i = 0 ; i < MAX ; i++)
		for(j = 0 ; j < MAX ; j++)
			if(table[i][j] == c)
				return true;
	return false;
}

int same_row(pair<char, char> c) //For rule 2, search the row
{
	int i, j, aux = 0;
	for(i = 0 ; i < MAX ; i++)
	{
		for(j = 0 ; j < MAX ; j++)
		{
			if(table[i][j] == c.first)
			{
				aux = i;
				break;	
			}
		}
		if(aux) break;
	}
	for(i = 0 ; i < MAX ; i++)
		for(j = 0 ; j < MAX ; j++)
			if(table[i][j] == c.second)
				if(aux == i)
					return i;
	return -1;
}

int same_col(pair<char, char> c) //For rule 3, search the column
{
	int i, j, aux = 0;
	for(i = 0 ; i < MAX ; i++)
	{
		for(j = 0 ; j < MAX ; j++)
		{
			if(table[i][j] == c.first)
			{
				aux = j;
				break;	
			}
		}
		if(aux) break;
	}
	for(i = 0 ; i < MAX ; i++)
		for(j = 0 ; j < MAX ; j++)
			if(table[i][j] == c.second)
				if(aux == j)
					return j;
	return -1;
}

int main()
{
	getline(cin, key);
	getline(cin, text);
	key.erase(remove(key.begin(), key.end(), ' '), key.end());
	text.erase(remove(text.begin(), text.end(), ' '), text.end());
	text.push_back('-');
	i = j = 0;
	while(!key.empty()) //Fill with key
	{
		if(!found(toupper(key[0])))
		{
			table[i][j] = toupper(key[0]);
			j++;
			if(j == 5) j = 0, i++;
		}
		key.erase(0, 1);
	}
	while(!abc.empty()) //End filling with remaining ABC
	{
		if(!found(abc[0]))
		{
			table[i][j] = abc[0];
			j++;
			if(j == 5) j = 0, i++;
		}
		abc.erase(0, 1);
	}
	for(i = 0 ; i < text.length() ; i += 2)
	{
		digraph.first = toupper(text[i]); //Create digraph
		digraph.second = toupper(text[i + 1]);
		if(digraph.first == digraph.second || digraph.second == '-') //Rule 1: Same letter, or one letter
		{
			text.insert(i + 1, "X");
			digraph.first = toupper(text[i]);
			digraph.second = toupper(text[i + 1]);
			if(same_row(digraph) != -1) //Rule 2: Same row
			{
				int row = same_row(digraph);
				for(j = 0 ; j < MAX ; j++)
					if(table[row][j] == digraph.first)
						encrypted.push_back(table[row][(j + 1) % 5]);
				for(j = 0 ; j < MAX ; j++)
					if(table[row][j] == digraph.second)
						encrypted.push_back(table[row][(j + 1) % 5]);
			}
			else if(same_col(digraph) != -1) //Rule 3: Same column
			{
				int col = same_col(digraph);
				for(j = 0 ; j < MAX ; j++)
					if(table[j][col] == digraph.first)
						encrypted.push_back(table[(j + 1) % 5][col]);
				for(j = 0 ; j < MAX ; j++)
					if(table[j][col] == digraph.second)
						encrypted.push_back(table[(j + 1) % 5][col]);
			}
			else
			{
				int x1 = -1, y1 = -1, x2 = - 1, y2 = -1;
				for(j = 0 ; j < MAX ; j++)
				{
					for(k = 0 ; k < MAX ; k++)
					{
						if(table[j][k] == digraph.first)
						{
							x1 = j;
							y1 = k;
							break;
						}
					}
					if(x1 != -1) break;
				}
				for(j = 0 ; j < MAX ; j++)
				{
					for(k = 0 ; k < MAX ; k++)
					{
						if(table[j][k] == digraph.second)
						{
							x2 = j;
							y2 = k;
							break;
						}
					}
					if(x2 != -1) break;
				}
				encrypted.push_back(table[x1][y2]);
				encrypted.push_back(table[x2][y1]);
			}
		}
		else if(same_row(digraph) != -1) //Rule 2: Same row
		{
			int row = same_row(digraph);
			for(j = 0 ; j < MAX ; j++)
				if(table[row][j] == digraph.first)
					encrypted.push_back(table[row][(j + 1) % 5]);
			for(j = 0 ; j < MAX ; j++)
				if(table[row][j] == digraph.second)
					encrypted.push_back(table[row][(j + 1) % 5]);
		}
		else if(same_col(digraph) != -1) //Rule 3: Same column
		{
			int col = same_col(digraph);
			for(j = 0 ; j < MAX ; j++)
				if(table[j][col] == digraph.first)
					encrypted.push_back(table[(j + 1) % 5][col]);
			for(j = 0 ; j < MAX ; j++)
				if(table[j][col] == digraph.second)
					encrypted.push_back(table[(j + 1) % 5][col]);
		}
		else
		{
			int x1 = -1, y1 = -1, x2 = - 1, y2 = -1;
			for(j = 0 ; j < MAX ; j++)
			{
				for(k = 0 ; k < MAX ; k++)
				{
					if(table[j][k] == digraph.first)
					{
						x1 = j;
						y1 = k;
						break;
					}
				}
				if(x1 != -1) break;
			}
			for(j = 0 ; j < MAX ; j++)
			{
				for(k = 0 ; k < MAX ; k++)
				{
					if(table[j][k] == digraph.second)
					{
						x2 = j;
						y2 = k;
						break;
					}
				}
				if(x2 != -1) break;
			}
			encrypted.push_back(table[x1][y2]);
			encrypted.push_back(table[x2][y1]);
		}
	}
	for(i = 0 ; i < encrypted.length() ; i++)
		if(isalpha(encrypted[i])) printf("%c", encrypted[i]);
	printf("\n");
	return 0;
}