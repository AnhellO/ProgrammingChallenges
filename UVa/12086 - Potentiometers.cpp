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
#define MOD 10000007
#define len(arr) (sizeof(arr)/sizeof(arr[0]))
using namespace std;

typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;

int update(vi &st, vi&A, int vertex, int L, int R, int id, int newVal) {
	int i = id, j = id;
	if(i > R || j < L) {
		return st[vertex];
	}
	if(L == i && R == j) {
		A[i] = newVal;
		return st[vertex] = newVal;
	}
	int p1 = update(st, A, vertex * 2, L, (L + R) / 2, id, newVal);
	int p2 = update(st, A, vertex * 2 + 1, (L + R) / 2 + 1, R, id, newVal);
	//cout << "Segment: [" << L << ',' << R << "] p1: " << p1 << ", p2: " << p2 << '\n';
	return st[vertex] = p1 + p2;
}

void build(vi &st, vi &A, int vertex, int L, int R) {
	if(L == R) {
		st[vertex] = A[L];
		//cout << "Leaf Vertex: " << vertex << '\n';
		//cout << "Segment: " << L << ',' << R << " element-> " << t[vertex] << "\n\n";
	} else {
		int left_child = vertex * 2, right_child = vertex * 2 + 1;
		build(st, A, left_child, L, (L + R) / 2);
		build(st, A, right_child, (L + R) / 2 + 1, R);
		//cout << "Vertex: " << vertex << " Left child: " << left_child << " Right Child: " << right_child << '\n';
		st[vertex] = st[left_child] + st[right_child];
		//cout << "Segment: " << L << ',' << R << " element-> " << t[vertex] << "\n\n";
	}
}

void create(vi &st, vi &A) {
	int n = A.size();
	st.assign(4 * n, 0);
	build(st, A, 1, 0, n - 1);
}

int rsq(vi &st, vi &A, int vertex, int L, int R, int i, int j) {
	if(i > R || j < L) {
		return -1;
	}
	if(L >= i && R <= j) {
		return st[vertex];
	}
	int p1 = rsq(st, A, vertex * 2, L, (L + R) / 2, i, j);
	int p2 = rsq(st, A, vertex * 2 + 1, (L + R) / 2 + 1, R, i, j);
	//cout << "Segment: [" << L << ',' << R << "] p1: " << p1 << ", p2: " << p2 << '\n';
	if(p1 == -1) {
		return p2;
	}
	if(p2 == -1) {
		return p1;
	}
	//cout << "entra! \n";
	return p1 + p2;
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	/*ifstream file("a.in");if(file)
	freopen("a.in", "rt", stdin);
	ofstream output("a.out");
	output.close();*/
	int n, nCase = 1;
	for(int k = 1 ; cin >> n && n ; k++) {
		if(k > 1) {
			cout << '\n';
		}
		cout << "Case " << k << ":\n";
		vi v(n);
		for(int i = 0 ; i < n ; i++) {
			cin >> v[i];
		}
		vi st;
		create(st, v);
		string q;
		int x, y;
		while(cin >> q && q != "END") {
			cin >> x >> y;
			if(q == "M") {
				cout << rsq(st, v, 1, 0, n - 1, --x, --y) << '\n';
			} else {
				update(st, v, 1, 0, n - 1, --x, y);
			}
		}
	}
	return 0;
}