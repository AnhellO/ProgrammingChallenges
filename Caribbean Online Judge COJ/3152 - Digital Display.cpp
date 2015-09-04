#include <bits/stdc++.h>
using namespace std;

char t[5];
string _col[] = {"   ", "   ", "o  ", "   ", "o  ", "   ", "   "};
string _0[] = {"+---+", "|   |", "|   |", "+   +", "|   |", "|   |", "+---+"};
string _1[] = {"    +", "    |", "    |", "    +", "    |", "    |", "    +"};
string _2[] = {"+---+", "    |", "    |", "+---+", "|    ", "|    ", "+---+"};
string _3[] = {"+---+", "    |", "    |", "+---+", "    |", "    |", "+---+"};
string _4[] = {"+   +", "|   |", "|   |", "+---+", "    |", "    |", "    +"};
string _5[] = {"+---+", "|    ", "|    ", "+---+", "    |", "    |", "+---+"};
string _6[] = {"+---+", "|    ", "|    ", "+---+", "|   |", "|   |", "+---+"};
string _7[] = {"+---+", "    |", "    |", "    +", "    |", "    |", "    +"};
string _8[] = {"+---+", "|   |", "|   |", "+---+", "|   |", "|   |", "+---+"};
string _9[] = {"+---+", "|   |", "|   |", "+---+", "    |", "    |", "+---+"};

int main() {
	while(scanf("%s", &t) && t[0] != 'e') {
		for(int i = 0 ; i < 7 ; i++) {
			for(int j = 0 ; j < 5 ; j++) {
				if(j == 2) {
					cout << _col[i];
					continue;
				}
				if(t[j] - '0' == 0) cout << _0[i];
				else if(t[j] - '0' == 1) cout << _1[i];
				else if(t[j] - '0' == 2) cout << _2[i];
				else if(t[j] - '0' == 3) cout << _3[i];
				else if(t[j] - '0' == 4) cout << _4[i];
				else if(t[j] - '0' == 5) cout << _5[i];
				else if(t[j] - '0' == 6) cout << _6[i];
				else if(t[j] - '0' == 7) cout << _7[i];
				else if(t[j] - '0' == 8) cout << _8[i];
				else if(t[j] - '0' == 9) cout << _9[i];
				if(j < 4) printf("  ");
			}
			printf("\n");
		}
		printf("\n\n");
	}
	printf("end\n");
	return 0;
}