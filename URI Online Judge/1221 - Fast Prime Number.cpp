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
#include <list>
#include <iomanip>
#include <utility>
using namespace std;

bool isPrime(int n) {
	if(n == 2 || n == 3) return true;
	if(n % 2 == 0 || n % 3 == 0) return false;
	int i = 5, w = 2;
	while(i * i <= n) {
		if(n % i == 0) return false;
		i += w;
		w = 6 - w;
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	int N, prime;
	cin >> N;
	while(N--) {
		cin >> prime;
		cout << (isPrime(prime) ? "Prime\n" : "Not Prime\n");
	}
	return 0;
}