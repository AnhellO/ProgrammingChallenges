#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int n;

int main()
{
    cin >> n;
    while(n != 0)    
    {
        cout << ceil(sqrt(n)) << endl;
        cin >> n;
    }
}