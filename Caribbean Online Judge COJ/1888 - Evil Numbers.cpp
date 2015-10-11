#include <iostream>
#include <cstdio>
#include <sstream>
#include <cstring>
using namespace std;

bool flag1, flag2;
string str;
unsigned long long int i, sum;

int main()
{
    while(cin >> str)
    {
        flag1 = false;
        flag2 = false;
        sum = 0;
        if(str.at(0) != '-')
        {
            for(i = 0 ; i < str.length() ; i++)
            {
                sum += str.at(i) - '0';
                if(str.at(i) == '6')
                    flag1 = true;
            }
        }
        else
        {
            for(i = 1 ; i < str.length() ; i++)
            {
                sum += str.at(i) - '0';
                if(str.at(i) == '6')
                    flag1 = true;
            }
        }
        if(str.at(str.length() - 1) == '0' || str.at(str.length() - 1) == '2' || str.at(str.length() - 1) == '4' || str.at(str.length() - 1) == '6' || str.at(str.length() - 1) == '8')
            flag2 = true;
        printf((flag1 && sum % 6 == 0 && sum % 3 == 0 && flag2) ? "EVIL\n" : "GOOD\n");
    }
    return 0;
}