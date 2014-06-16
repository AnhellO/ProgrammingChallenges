#include <cstdio>
#include <vector>
#include <utility>
using namespace std;

int N, i, A, B;
vector<pair<int, int> > joins;

bool hasNumber(vector<int> v)
{
	int i;
	for(i = 0 ; i < N ; i++)
		if(v[i] == 0)
			return false;
	return true;
}

int main()
{
	scanf("%d", &N);
	vector<int> students(N);
	for(i = 0 ; i < N ; i++) scanf("%d", &students[i]);
	while(scanf("%d %d", &A, &B) != EOF) joins.push_back(make_pair(A - 1, B - 1));
	while(!hasNumber(students))
	{
		for(i = 0 ; i < joins.size() ; i++)
			if(students[joins[i].first] == 0 && students[joins[i].second] != 0)
				students[joins[i].first] = students[joins[i].second];
			else if(students[joins[i].first] != 0 && students[joins[i].second] == 0)
				students[joins[i].second] = students[joins[i].first];
	}
	for(i = 0 ; i < N ; i++)
		printf("%d\n", students[i]);
	return 0;
}