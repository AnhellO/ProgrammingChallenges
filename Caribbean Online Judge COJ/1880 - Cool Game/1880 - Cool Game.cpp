#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
using namespace std;

int t, n, i;

int checkMatrix(string matrix[], int n)
{
    int i, j, cont = 0;
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < matrix[i].length() ; j++)
            if(matrix[i][j] == '1')
            	cont++;
    return cont;
}

int main() 
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        string matrix[n], target[n];
        for(i = 0 ; i < n ; i++) cin >> matrix[i];
        for(i = 0 ; i < n ; i++) cin >> target[i];
        cout << ((checkMatrix(matrix, n) == checkMatrix(target, n)) ? "YES\n" : "NO\n");
    }
	return 0;
}