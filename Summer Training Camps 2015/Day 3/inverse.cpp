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
#include <fstream>
#define INF 1000000000000
#define MAX 1000000
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vivi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int cont = 0;

void merge(int s[], int low, int middle, int high) {
	int i;
	queue<int> buffer1, buffer2;
	//printf("Low: %d, Middle: %d, High: %d\n", low, middle, high);
	for(i = low ; i <= middle ; i++) {
		buffer1.push(s[i]);
		//printf("%d ", s[i]);
	}
	for(i = middle + 1 ; i <= high ; i++) {
		buffer2.push(s[i]);
		//printf("%d ", s[i]);
	}

	i = low;
	while(!(buffer1.empty() || buffer2.empty())) {
		if(buffer1.front() <= buffer2.front()) {
			s[i++] = buffer1.front();
			buffer1.pop();
		} else {
			s[i++] = buffer2.front();
			cont += buffer1.size();
			buffer2.pop();
		}
	}

	while(!buffer1.empty()) {
		s[i++] = buffer1.front();
		buffer1.pop();
	}
	while(!buffer2.empty()) {
		s[i++] = buffer2.front();
		buffer2.pop();
	}
	//printf("\n");
}

void mergeSort(int s[], int low, int high) {
	int i, middle;

	if(low < high) {
		middle = (low + high) / 2;
		mergeSort(s, low, middle);
		mergeSort(s, middle + 1, high);
		merge(s, low, middle, high);
	}
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("inverse.in");
	if(file) freopen("inverse.in", "rt", stdin);
	ofstream output("inverse.out");
    int n;
    cin >> n;
    int v[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> v[i];
    }
    mergeSort(v, 0, n - 1);
    /*for(int i = 0 ; i < n ; i++) {
        cout << v[i] << ' ';
    }*/
    output << cont << '\n';
    output.close();
    return 0;
}
