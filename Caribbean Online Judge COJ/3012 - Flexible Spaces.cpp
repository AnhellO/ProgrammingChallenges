#include <cstdio>
#include <vector>
#include <set>
using namespace std;
 
int W, P, i, j;
set<int> rooms;
set<int>::iterator it;
 
int main()
{
	scanf("%d %d", &W, &P);
	vector<int> partitions(P);
	rooms.insert(W);
	for(i = 0 ; i < P ; i++) scanf("%d", &partitions[i]);
	for(i = P - 1 ; i > 0 ; i--)
	{
		for(j = 0 ; j < i ; j++)
		{
			if(partitions[i] > partitions[j]) rooms.insert(partitions[i] - partitions[j]);
		}
	}
	for(j = 0 ; j < P ; j++)
		rooms.insert(W - partitions[j]);
	for(j = 0 ; j < P ; j++)
		rooms.insert(partitions[j] - 0);
 
	it = rooms.begin();
	printf("%d", *it);
	for(it = ++rooms.begin() ; it != rooms.end() ; ++it) printf(" %d", *it);
	return 0;
}