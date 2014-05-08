#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 1608 - DNA Sorting
*
* We must get the unsortedness of a DNA sequence by calculating, from every char in the
* sequence, the chars to its right that have a lower ASCII position, at the end, the sum of all of this
* measures will give us the called number of inversions in the sequence. After getting the
* number of inversions from every DNA sequence given, we will sort all of them according to
* their number of inversions (from the more sorted to least sorted), and in case of tie, we must
* sort them lexicographically. So, by creating a vector of pairs to store the DNA sequence and its 
* numbers of inversions, we can easily sort them using a predicate function, 
* first by number of inversions, and then by lexicographic value
*/
int N, M, i;

bool predicate(pair<string, int> const& lhs, pair<string, int> const& rhs) 
{
	if(lhs.second != rhs.second) //first by number of inversions
		return lhs.second < rhs.second;
	if(lhs.first != rhs.first) //in case of tie, by lexicographic value
		return lhs.first < rhs.first;
}

int getMeasure(string s)
{
	int i, j, cont = 0; //for every char given, get the number of inversions saving it on a counter
	for(i = 0 ; i < s.length() ; i++) //from the actual char
		for(j = i + 1 ; j < s.length() ; j++) //from the next char to the end, the chars with lower ASCII position
			if(s[i] > s[j])
				cont++;
	return cont;
}

int main() 
{
	while(cin >> N >> M && (N && M))
	{
		vector<pair<string, int> > dna(M);
		for(i = 0 ; i < M ; i++) //Fill de vector
		{
			cin >> dna[i].first;
			dna[i].second = getMeasure(dna[i].first);
		}
		sort(dna.begin(), dna.end(), &predicate); //Sort using the predicate function
		for(i = 0 ; i < M ; i++)
			cout << dna[i].first << '\n';
		cout << '\n';
	}
	return 0;
}