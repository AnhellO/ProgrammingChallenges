#include <iostream>
#include <cstring>
#include <string>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int i;
string word;

int main()
{
    while(getline(cin, word))
    {
        if(word == "#") break;

        ciclo(i, 0, word.length(), 1)
        {
            if(word[i] == ' ')
            {
                word.erase(i, 1);
                word.insert(i, "%20");
                i += 2;
            }
            else if(word[i] == '!')
            {
                word.erase(i, 1);
                word.insert(i, "%21");
                i += 2;
            }
            else if(word[i] == '$')
            {
                word.erase(i, 1);
                word.insert(i, "%24");
                i += 2;
            }
            else if(word[i] == '%')
            {
                word.erase(i, 1);
                word.insert(i, "%25");
                i += 2;
            }
            else if(word[i] == '(')
            {
                word.erase(i, 1);
                word.insert(i, "%28");
                i += 2;
            }
            else if(word[i] == ')')
            {
                word.erase(i, 1);
                word.insert(i, "%29");
                i += 2;
            }
            else if(word[i] == '*')
            {
                word.erase(i, 1);
                word.insert(i, "%2a");
                i += 2;
            }
        }
        cout << word << endl;
    }
    return 0;
}