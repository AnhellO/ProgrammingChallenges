#include <cstdio>
using namespace std;

#define LECTURA(t) while(t--)
#define CICLO(i, a, b, c) for(i = a ; i < b ; i += c)
int t, n, i, fibonacci[10001];

int main()
{
	fibonacci[0] = 1 % 10000;
    fibonacci[1] = 1 % 10000;
    fibonacci[2] = 2 % 10000;
    CICLO(i, 3, 10000, 1)
        fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2] ) % 10000;
        
	scanf("%d", &t);
	LECTURA(t)
	{
		scanf("%d", &n);
		if(n == 1)
            printf("%d %d %d\n", 0, 0, 1);
        else if(n == 2)
            printf("%d %d %d\n", 0, 1, 1);
        else
        	printf("%d %d %d\n", fibonacci[n - 3], fibonacci[n - 2], fibonacci[n - 1]);
	}
    return 0;
}