#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#define FOR(i, a, b, c) for(i = a ; i >= b ; i -= c)
using namespace std;

unsigned long long int nIps = 0;
vector<int> ip1(4), ip2(4);

int main() 
{
	scanf("%d.%d.%d.%d %d.%d.%d.%d", &ip1[0], &ip1[1], &ip1[2], &ip1[3], &ip2[0], &ip2[1], &ip2[2], &ip2[3]);
	nIps += ip1[3] - ip2[3] + 1;
	nIps += (ip1[2] - ip2[2]) * 256;
	nIps += ((ip1[1] - ip2[1]) * 256) * 256;
	nIps += (((ip1[0] - ip2[0]) * 256) * 256) * 256;
	printf("%llu\n", nIps);
	return 0;
}