#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float H, P;
    while (cin >> H >> P)
    {
        std::cout << std::fixed;
        std::cout << std::setprecision(2) << H/P << '\n';
    }
    return 0;
}