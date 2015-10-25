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
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef map<int, int> mii;
typedef map<char, int> mci;
typedef map<string, int> msi;
typedef map<int, ii> miii;
typedef map<string, string> mss;
typedef map<string, vs> msvs;
typedef long long int lli;
typedef unsigned long long int ulli;

ii st_update(vii &t, vi &A, int vertex, int L, int R, int id, int newVal) {
	int i = id, j = id;
	if(i > R || j < L) {
		return t[vertex];
	}
	if(L == i && R == j) {
		A[i] = newVal;
		return make_pair(1, 2);
	}
	ii p1 = st_update(t, A, vertex * 2, L, (L + R) / 2, id, newVal);
	ii p2 = st_update(t, A, vertex * 2 + 1, (L + R) / 2 + 1, R, id, newVal);
	if(A[(L + R) / 2] < A[(L + R) / 2 + 1]) {
		if(p1.first && p2.first) {
			t[vertex].first = 1;
		} else {
			t[vertex].first = 0;
		}
		if(p1.second && p2.second) {
			t[vertex].second = 2;
		} else {
			t[vertex].second = 0;
		}
	} else if(A[(L + R) / 2] == A[(L + R) / 2 + 1]) {
		if(p1.first && p2.first) {
			t[vertex].first = 1;
		} else {
			t[vertex].first = 0;
		}
		t[vertex].second = 0;
	} else {
		t[vertex].first = t[vertex].second = 0;
	}
	return t[vertex];
}

void st_build(vii &t, const vi &A, int vertex, int L, int R) {
	if(L == R) {
		t[vertex] = make_pair(1, 2);
		//cout << "Leaf Vertex: " << vertex << '\n';
		//cout << "Segment: [" << L << ',' << R << "], element-> " << t[vertex].first << ' ' << t[vertex].second << "\n\n";
	} else {
		int nL = 2 * vertex;
		int nR = 2 * vertex + 1;
		st_build(t, A, nL, L, (L + R) / 2);
		st_build(t, A, nR, (L + R) / 2 + 1, R);
		ii lContent = t[nL], rContent = t[nR];
		if(A[(L + R) / 2] < A[(L + R) / 2 + 1]) {
			if(lContent.first && rContent.first) {
				t[vertex].first = 1;
			} else {
				t[vertex].first = 0;
			}
			if(lContent.second && rContent.second) {
				t[vertex].second = 2;
			} else {
				t[vertex].second = 0;
			}
		} else if(A[(L + R) / 2] == A[(L + R) / 2 + 1]) {
			if(lContent.first && rContent.first) {
				t[vertex].first = 1;
			} else {
				t[vertex].first = 0;
			}
			t[vertex].second = 0;
		} else {
			t[vertex].first = t[vertex].second = 0;
		}
		//cout << "Vertex: " << vertex << " Left child: " << nL << " Right Child: " << nR << '\n';
		//cout << "Segment: [" << L << ',' << R << "], element-> " << t[vertex].first << ' ' << t[vertex].second << "\n\n";
	}
}

void st_create(vii &t, const vi &A) {
	int n = A.size();
	t.assign(n * 4, make_pair(-1, -1));
	st_build(t, A, 1, 0, n - 1);
}

int st_rq(vii &t, const vi &A, int vertex, int L, int R, int i, int j) {
	if(i > R || j < L) {
		return -1;
	}
	if(L >= i && R <= j) {
		//cout << "Vertex: " << vertex << '\n';
		//cout << "Segment: [" << L << ',' << R << "], element-> " << t[vertex].first << ' ' << t[vertex].second << "\n\n";
		if(t[vertex].second) {
			return 2;
		}
		if(t[vertex].first) {
			return 1;
		}
		return 0;
	}
	int p1 = st_rq(t, A, 2 * vertex, L, (L + R) / 2, i, j);
	int p2 = st_rq(t, A, 2 * vertex + 1, (L + R) / 2 + 1, R, i, j);
	/*cout << "Vertex: " << vertex << '\n';
	cout << "Segment: [" << L << ',' << R << "], element-> " << t[vertex].first << ' ' << t[vertex].second << "\n";
	cout << "p1: " << p1 << ", p2: " << p2 << "\n\n";*/
	if(p1 == -1) {
		return p2;
	}
	if(p2 == -1) {
		return p1;
	}
	if(p1 && p2 && A[(L + R) / 2] < A[(L + R) / 2 + 1]) {
		if(p1 == 2 && p2 == 2) {
			return 2;
		} else {
			return 1;
		}
	} else if(p1 && p2 && A[(L + R) / 2] == A[(L + R) / 2 + 1]) {
		return 1;
	} else {
		return 0;
	}
}

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, Q;
	cin >> N >> Q;
	vi A(N);
	vii st;
	for(int i = 0 ; i < N ; i++) {
		cin >> A[i];
	}
	st_create(st, A);
	for(int k = 0 ; k < Q ; k++) {
		int op, i, j;
		cin >> op >> i >> j;
		if(op == 1) {
			st_update(st, A, 1, 0, A.size() - 1, --i, j);
			/*for(int k = 0 ; k < N ; k++) {
				cout << A[k] << ' ';
			}
			cout << '\n';*/
		} else {
			cout << st_rq(st, A, 1, 0, A.size() - 1, --i, --j) << '\n';
		}
	}
	return 0;
}