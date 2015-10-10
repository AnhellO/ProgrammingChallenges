#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int i;
char temp;
string str;

int main()
{
    while(true)
    {
        getline(cin, str);
        if(str.compare("*") == 0)
            break;
        for(i = 0 ; i < str.length() ; i++)
        {
            if(i == 0)
                temp = toupper(str.at(i));
            else
            {
                if(str.at(i) == ' ')
                    if(toupper(str.at(i + 1)) != temp)
                        break;
            }
        }
        printf((i == str.length()) ? "Y\n" : "N\n");
    }
    return 0;
}