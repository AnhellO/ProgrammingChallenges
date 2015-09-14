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
#include <functional>
#define INF 1000000000000
#define MAX 1000000
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    //ifstream file("addAll.txt");
	//if(file) freopen("addAll.txt", "rt", stdin);
	//ofstream output("addAll.out");
    int N;
    while(cin >> N && N) {
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i = 0 ; i < N ; i++) {
            int k;
            cin >> k;
            pq.push(k);
        }
        if(N == 1) {
            cout << "0\n";
            continue;
        }
        if(N == 2) {
            int a = pq.top();
            pq.pop();
            cout << a + pq.top() << '\n';
            continue;
        }
        int sum, cost = 0;
        for(int i = 0 ; i < N - 1 ; i++) {
            sum = pq.top();
            pq.pop();
            sum += pq.top(),
            pq.pop();
            pq.push(sum);
            cost += sum;
            //printf("%d ", sum);
        }
        cout << cost << '\n';
    }
    //output.close();
    return 0;
}
