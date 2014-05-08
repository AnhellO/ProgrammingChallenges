#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;
/* 
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2341 - Big List
* Read the number and questions and save them in a vector, sort them, and after that start to read
* the answers to the questions, there are three kind of possibilities:
* -The answer just have its respective question (didnt find any space): It doesn't exist
* -If have question and answer, search for it in the vector of questions, if found it, ok
* -If not, wrong answer
*/
#define ciclo(i, a, b) for(i = a ; i < b ; i++)
int n, m, i;
string line;

int main()
{
    cin >> n >> m;
    string bigList[n + 1];
    ciclo(i, 0, n + 1)
        getline(cin, bigList[i]);
    sort(bigList, bigList + n);
    ciclo(i, 0, m)
    {
        getline(cin, line);
        if(line.find(" ") == std::string::npos)
        {
            cout << "not found\n";
            continue;
        }
        else
            if(binary_search(bigList, bigList + n + 1, line))
                cout << "ok\n";
            else
                cout << "wrong\n";
    }
    return 0;
}