#include <iostream>
#include <vector>
#include <utility>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define CL(v) v.clear();
using namespace std;

int N, i;
char gender;
string name, man, woman;
double oW, nW, pM, pW;

int main() 
{
	cout.precision(2);
	while(cin >> N)
	{
		if(!N) break;
		pM = pW = 0.0;
		CL(man);
		CL(woman);
		FOR1(i, 0, N, 1)
		{	
			cin >> name >> gender >> oW >> nW;
			if(gender == 'F')
			{
				if(pW < ((oW - nW) * 100.0) / oW)
				{
					woman = name;
					pW = ((oW - nW) * 100.0) / oW;
				}
			}
			if(gender == 'M')
			{
				if(pM < ((oW - nW) * 100.0) / oW)
				{
					man = name;
					pM= ((oW - nW) * 100.0) / oW;
				}
			}
		}
		cout << fixed << man << ' ' << pM << "% " << woman << ' ' << pW << "%\n";
	}
	return 0;
}