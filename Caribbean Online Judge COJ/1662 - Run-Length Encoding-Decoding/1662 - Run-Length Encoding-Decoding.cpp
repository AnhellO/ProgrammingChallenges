#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <cctype>
#define FOR1(i, a, b, c) for(i = a ; i < b ; i += c)
#define FOR2(i, a, b, c) for(i = a ; i >= b ; i -= c)
#define PB(v, m) v.push_back(m);
#define CL(v) v.clear()
using namespace std;

int T, i, j, k, newN;
string code, out, number;
stringstream ss;

int main() 
{
	cin >> T;
	FOR1(i, 0, T, 1)
	{
		cout << "Case " << i + 1 << ": ";
		cin >> code;
		CL(out);
		FOR1(j, 0, code.length(), 1)
		{
			CL(number);
			if(isdigit(code[j]))
			{	
				FOR1(k, j, code.length(), 1)
					if(isdigit(code[k]))
					{
						PB(number, code[k])
						if(j < k) j = k;
					}
					else break;
			}
			CL(ss);
			ss << number;
			ss >> newN;
			cout << newN << ' ';
			FOR2(k, j - 1, 0, 1)
			{
				if(!isdigit(code[k]))
				{
					out.append(newN, code[k]);
					break;
				}
			}
			newN = 0;
		}
		cout << out << '\n';
	}
	return 0;
}