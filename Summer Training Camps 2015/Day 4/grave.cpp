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
#define MOD 10000007
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

struct point {
    int x, y;
};

/*double euclideanDist(point p1, point p2) {
    return hypot(p1.x - p2.x, p1.y - p2.y);
}*/

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);
    ifstream file("grave.in");
	if(file) freopen("grave.in", "rt", stdin);
	ofstream output("grave.out");
    point gBottomLeft, gRightCorner, cBottomLeft, cRightCorner;
    int width, height;
    cin >> gBottomLeft.x >> gBottomLeft.y >> gRightCorner.x >> gRightCorner.y;
    cin >> cBottomLeft.x >> cBottomLeft.y >> cRightCorner.x >> cRightCorner.y;
    cin >> width >> height;
    point cgBottom, cgUp, cgRight, cgLeft;
    cgBottom.x = cBottomLeft.x;
    cgBottom.y = gBottomLeft.y;
    cgUp.x = cRightCorner.x;
    cgUp.y = gRightCorner.y;
    cgRight.x = gRightCorner.x;
    cgRight.y = cRightCorner.y;
    cgLeft.x = gBottomLeft.x;
    cgLeft.y = cBottomLeft.y;
    int distUp, distBottom, distRight, distLeft, distGheight, distGwidth;
    distUp = cgUp.y - cRightCorner.y;
    distBottom = cBottomLeft.y - cgBottom.y;
    distRight = cgRight.x - cRightCorner.x;
    distLeft = cBottomLeft.x - cgLeft.x;
    distGheight = gRightCorner.y - gBottomLeft.y;
    distGwidth = gRightCorner.x - gBottomLeft.x;
    //cout << distUp << ' ' << distBottom << ' ' << distRight << ' ' << distLeft << ' ' << distGheight << ' ' << distGwidth << '\n';
    if(height <= distUp && width <= distGwidth){
        output << "Yes\n";
    } else if(height <= distBottom && width <= distGwidth){
        output << "Yes\n";
    } else if(width <= distRight && height <= distGheight){
        output << "Yes\n";
    } else if(width <= distLeft && height <= distGheight){
        output << "Yes\n";
    } else {
        output << "No\n";
    }
    output.close();
    /*cout << cgBottom.x << ' ' << cgBottom.y << '\n';
    cout << cgUp.x << ' ' << cgUp.y << '\n';
    cout << cgRight.x << ' ' << cgRight.y << '\n';
    cout << cgLeft.x << ' ' << cgLeft.y << '\n';
    cout << gBottomLeft.x << gBottomLeft.y << gRightCorner.x << gRightCorner.y << '\n';
    cout << cBottomLeft.x << cBottomLeft.y << cRightCorner.x << cRightCorner.y << '\n';
    cout << width, height;*/
    return 0;
}
