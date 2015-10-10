#include <iostream>
#include <cstring>
using namespace std;

int i, result;
string number;
int factorial(int);

int main()
{
    do
    {
        cin >> number;
        if(number == "0")
            break;
        result = 0;
        for(i = number.length() - 1 ; i >= 0 ; i--)
        {
            result += (number[i] - '0') * factorial(number.length()  - i);;
        }
        cout << result << endl;
    }while(true);
    return 0;
}

int factorial(int n)
{
    if(n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}