#include <bits/stdc++.h>
#define MAX 1000

char binaryNumber[MAX], octalNumber[MAX];
long int i = 0, j = 0;

int main() {
    scanf("%s",binaryNumber);

    while(binaryNumber[i]) {
    	binaryNumber[i] = binaryNumber[i] - 48;
	    ++i;
    }
    --i;
    while(i - 2 >= 0) {
	    octalNumber[j++] = binaryNumber[i - 2] * 4 +  binaryNumber[i - 1] * 2 + binaryNumber[i];
	    i -= 3;
    }
    if(i == 1) octalNumber[j] = binaryNumber[i-1] *2 + binaryNumber[i] ;
    else if(i==0) octalNumber[j] =  binaryNumber[i] ;
    else --j;
    while(j >= 0) {
      printf("%d", octalNumber[j--]);
    }
    return 0;
}