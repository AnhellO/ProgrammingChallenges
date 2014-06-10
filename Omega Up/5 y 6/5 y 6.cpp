#include <iostream>
#include <cstring>
#include <sstream>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

string num1, num2, a, b;
unsigned long long int newA = 0, newB = 0, sums[3], i;
stringstream ss;

int main()
{
    cin >> num1 >> num2;
    a = num1;
    b = num2;
    if(a.find("5") == std::string::npos && a.find("6") == std::string::npos && b.find("5") == std::string::npos && b.find("6") == std::string::npos)
    {
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << " " << newA + newB << "\n";
    }
    else if(a.find("5") == std::string::npos && a.find("6") == std::string::npos && (b.find("5") != std::string::npos || b.find("6") != std::string::npos))
    {
        FOR(i, 0, b.length(), 1)
        {
            if(b[i] == '6')
                b[i] = '5';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << " ";
        FOR(i, 0, b.length(), 1)
        {
            if(b[i] == '5')
                b[i] = '6';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << "\n";
    }
    else if((a.find("5") != std::string::npos || a.find("6") != std::string::npos) && b.find("5") == std::string::npos && b.find("6") == std::string::npos)
    {
        FOR(i, 0, a.length(), 1)
        {
            if(a[i] == '6')
                a[i] = '5';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << " ";
        FOR(i, 0, a.length(), 1)
        {
            if(a[i] == '5')
                a[i] = '6';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << "\n";
    }
    else if((a.find("5") != std::string::npos || a.find("6") != std::string::npos) && (b.find("5") != std::string::npos || b.find("6") != std::string::npos))
    {
        FOR(i, 0, a.length(), 1)
        {
            if(a[i] == '6')
                a[i] = '5';
        }
        FOR(i, 0, b.length(), 1)
        {
            if(b[i] == '6')
                b[i] = '5';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << " ";
        a = num1;
        b = num2;
        FOR(i, 0, a.length(), 1)
        {
            if(a[i] == '5')
                a[i] = '6';
        }
        FOR(i, 0, b.length(), 1)
        {
            if(b[i] == '5')
                b[i] = '6';
        }
        ss << a;
        ss >> newA;
        ss.clear();
        ss << b;
        ss >> newB;
        ss.clear();
        cout << newA + newB << "\n";
    }
    return 0;
}