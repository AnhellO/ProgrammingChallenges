#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 1769 - Matching Words
*
* Not to hard, you just have to deal with tons of inputs (more than 200), and accomplish a good
* time approaching of sort and binary search complexity O(n*logn), then, the linear complexity
* of remove and erase will give and extra-space time. The first step is to sort both strings and
* then, create two temporal strings (which will serve to remove operations). We iterate first over
* the first string, and char by char we check if this char exists on the second string, if so, remove
* all the ocurrences from this char in the second string. At the end, we check if the second string
* is empty, if it is, then the words match, other way, we start the same process but now iterating
* over the second string, and in the end, if not A from B and not B from A, both words don't match
*/
string s1, s2, a, b;
int N1, N2, i;

int main() 
{
	cin >> s1 >> s2;
	N1 = s1.length();
	N2 = s2.length();
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	a = s1;
	b = s2;
	for(i = 0 ; i < N1 ; i++)
		if(binary_search(b.begin(), b.end(), a[i]))
			b.erase(remove(b.begin(), b.end(), a[i]), b.end());
	if(b.empty()) cout << "YES\n";
	else
	{
		b = s2;
		for(i = 0 ; i < N2 ; i++)
			if(binary_search(a.begin(), a.end(), b[i]))
				a.erase(remove(a.begin(), a.end(), b[i]), a.end());
		cout << ((a.empty()) ? "YES\n" : "NO\n");
	}
	return 0;
}