#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <cstdio>
using namespace std;

typedef unsigned int UI;
int N;
UI a, b, c;
string A, B, C;

UI IPToUInt(const string ip)
{
    int a, b, c, d;
    UI addr = 0;
 
    if(sscanf(ip.c_str(), "%d.%d.%d.%d", &a, &b, &c, &d) != 4) return 0;
 
    addr = a << 24;
    addr |= b << 16;
    addr |= c << 8;
    addr |= d;
    return addr;
}

int main()
{
	cin >> N;
	while(N--)
	{
		cin >> A >> B >> C;
		a = IPToUInt(A);
		b = IPToUInt(B);
		c = IPToUInt(C);
		//cout << A << ' ' << B << ' ' << C << '\n';
		cout << ((c >= min(a, b) && c <= max(a, b)) ? "YES\n" : "NO\n");
	}
	return 0;
}