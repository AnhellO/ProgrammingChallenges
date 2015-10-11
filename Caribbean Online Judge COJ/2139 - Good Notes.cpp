#include <iostream>
#include <cstring>
using namespace std;

int i, j;
string s, t, out;

int main()
{
    while(cin >> s >> t)
    {
        string temp;
        j = 0;
        for(i = 0 ; i < t.length() ; i++)
        {
            if(s.at(j) == t.at(i))
            {
                temp.push_back(t.at(i));
                j++;
                if(s.compare(temp) == 0)
                    break;
            }
        }
        out = (s.compare(temp) == 0) ? "Yes" : "No";
        cout << out << endl;
    }
    return 0;
}