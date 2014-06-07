#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool flag = false, flagMax = false;
int N, K, cont = 0, pepe = 0, juan = 0, contPast = 0;
string word, temp;

int countChar(string s, int c)
{
	int i, count = 0;
	for(i = 0 ; i < s.length() ; i++)
		if(s[i] == c + 65)
			count++;
	return count;
}

int main()
{
	cin >> N >> word >> K;
	if(K % 2) flag = true;
	while(cont < 26)
	{
		temp = word;
		word.erase(remove(word.begin(), word.end(), cont + 65), word.end());
		if(!flag)
		{
			flag = true;
			K = countChar(temp, cont) * word.length();
			pepe += K;
		}
		else
		{
			flag = false;
			K = countChar(temp, cont) * word.length();
			juan += K;
		}
		cont++;
		if(contPast < K) flagMax = (!flagMax) ? true : false;
	}
	if(pepe > juan) cout << "PEPE " << pepe - juan << '\n';
	else if(juan > pepe) cout << "JUAN " << juan - pepe << '\n';
	else cout << ((!flagMax) ? "PEPE 0\n" : "JUAN 0\n");
	return 0;
}