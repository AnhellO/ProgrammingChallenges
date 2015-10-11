    #include <iostream>
    #include <cstdio>
    #include <cstring>
    #include <string>
    #include <algorithm>
    #include <cmath>
    #include <vector>
    #include <set>
    using namespace std;
     
    int main() {
    int N, C, v;
    scanf("%d", &N);
    set<int> s;
    while(N--) {
    scanf("%d", &C);
    while(C--) {
    scanf("%d", &v);
    s.insert(v);
    }
    }
    printf("%d\n", s.size());
    return 0;
    }