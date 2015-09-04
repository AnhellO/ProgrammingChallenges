#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
using namespace std;

unsigned long long int _sieve_size, sums[1010];
bitset<10000010> bs;
 
void sieve(unsigned long long int upperbound) {
	_sieve_size = upperbound + 1;
	bs.set();
	bs[0] = bs[1] = 0;
	for(unsigned long long int i = 2 ; i <= _sieve_size ; i++) {
		if(bs[i]) {
			for(unsigned long long int j = i * i ; j <= _sieve_size ; j += i) {
				bs[j] = 0;
			}
		}
	}
}

unsigned long long int gauss(unsigned long long int n) {
	return (n * (n + 1)) / 2;
}

void go() {
	sums[0] = sums[1] = 0;
	sums[2] = 5;
	sums[3] = 5;
	sums[4] = 7;
	sums[5] = 24;
	for(unsigned long long int i = 6 ; i <= 1000 ; i++) {
		unsigned long long int low = gauss(i - 1) + 1;
		unsigned long long int high = gauss(i);
		for(unsigned long long int j = low ; j <= high ; j++) {
			if(bs.test(j)) {
				sums[i] += j;
			}
		}
	}
}

int main() {
	sieve(1000000);
	go();
	unsigned long long int T, N;
	scanf("%llu", &T);
	while(T--) {
		scanf("%llu", &N);
		printf("%llu\n", sums[N]);
	}
	return 0;
}