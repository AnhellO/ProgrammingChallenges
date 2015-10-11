#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#define lectura(t) while(t--)
unsigned long long int t, a, b, mod = 10;
string out;
std::ostringstream strs;
unsigned long long int modular(unsigned long long int, unsigned long long int, unsigned long long int);

int main()
{
    cin >> t;
    lectura(t)
    {
        cin >> a >> b;
        strs << modular(a, b, mod);
        out = strs.str();
        cout << out[out.length() - 1] << endl;
    }
    return 0;
}

unsigned long long int modular(unsigned long long int a, unsigned long long int b, unsigned long long int mod)
{
    unsigned long long int exp = 1, x = a % mod;
    while (b > 0)
    {
        if (b % 2 != 0)
            exp = (exp * x) % mod;
        x = (x * x) % mod;
        b = b / 2;
    }
    return exp;
}