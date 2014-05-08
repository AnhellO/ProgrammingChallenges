#include <iostream>
#include <string>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: Vigenere Cypher Encryption
*
* This problem is easy, just use some ASCII (alphabet 65 to 90 A - B respectively for every letter)
* operations to change the ith char from the given word to the jth char from the given encryption
* key, the hard case is when you have to rotate the alphabet (if some key char + some word
* char sums more than 90), then, you just have to update the number of chars to be displaced
*/
int i, j, displace;
string key, word;

int main()
{
	while(cin >> key && key != "0") //Check if '0'
	{
		cin >> word;
		j = 0;
		for(i = 0 ; i < word.length() ; i++)
		{
			if(j == key.length()) j = 0; //If the key is smaller, reinitialize it
			displace = key[j] - 64; //# of chars to displace
			if(word[i] + displace > 90) //Check if the # of chars to displace exceeds 90 (Z letter)
			{
				displace -= (90 - word[i]); //If exceed, update # of chars to displace
				word[i] = displace + 64; //And start the actual char from the 'A'
			}
			else word[i] += displace; //If not, just sum the actual # of chars to displace
			j++;
		}
		cout << word << '\n';
	}
	return 0;
}
