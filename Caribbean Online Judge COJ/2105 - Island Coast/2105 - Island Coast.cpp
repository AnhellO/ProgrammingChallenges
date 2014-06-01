#include <cstdio>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2105 - Island Coast
*
* Easy one, fill the matrix and then check it. The problem tell us that the island is always
* surrounded by water, so we just have to check if we're not in the banks of the matrix (0 indices),
* if not, check if we're in a piece of land ('+'), then check if it is coast just by looking at the 
* cardinal points, if it is, increment the counter:
*
*			        N
*				↑
*			 W ← [i, j] → E
*		        	↓
*				S
*
*/
int n, m, i, j, cont = 0;

int main() 
{
    	scanf("%d %d", &n, &m);
	char island[n][m];
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < m ; j++)
			scanf(" %c", &island[i][j]);
	for(i = 0 ; i < n ; i++)
		for(j = 0 ; j < m ; j++)
    	    		if(i && j && island[i][j] == '+')
                		if(island[i - 1][j] == '-' || island[i][j - 1]  == '-' || island[i + 1][j]  == '-' || island[i][j + 1]  == '-')
                    			cont++;
    	printf("%d\n", cont);
	return 0;
}
