#include <iostream>
#include <cstring>
using namespace std;

string password, out;
int t, i, conts[6];

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> password;
        for(i = 0 ; i < password.length() ; i++)
        {
            if(password.at(i) == 'B')
                conts[0]++;
            else if(password.at(i) == 'R')
                conts[1]++;
            else if(password.at(i) == 'O')
                conts[2]++;
            else if(password.at(i) == 'K')
                conts[3]++;
            else if(password.at(i) == 'E')
                conts[4]++;
            else if(password.at(i) == 'N')
                conts[5]++;
        }
        out = (conts[0] == conts[1] && conts[1] == conts[2] && conts[2] == conts[3] && conts[3] == conts[4] && conts[4] == conts[5]) ? "No Secure" : "Secure";
        cout << out << endl;
        std::fill_n(conts, 6, 0);
    }
    return 0;
}