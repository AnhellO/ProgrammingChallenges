#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int N, i, j, k, index, pos, MPC = 0;

struct Killer
{
	int id, P;
	vector<int> friends;
};

bool predicate(Killer left, Killer right)
{
	if(left.P != right.P)
		return left.P > right.P;
	return left.friends.size() < right.friends.size();
}

int main()
{
	scanf("%d", &N);
	vector<Killer> killers(N);
	for(i = 0 ; i < N ; i++)
	{
		scanf("%d", &killers[i].P);
		killers[i].id = i;
	}
	while(scanf("%d %d", &i, &j) != EOF)
	{
		killers[i - 1].friends.push_back(j - 1);
		killers[j - 1].friends.push_back(i - 1);
	}
	sort(killers.begin(), killers.end(), &predicate);
	for(i = 0 ; i < N ; i++)
	{
		for(j = 0 ; j < killers[i].friends.size() ; j++)
		{
			k = killers[i].friends[j];
			if(k == -1) continue;
			for(index = i + 1 ; index < N ; index++)
			{
				if(k == killers[index].id)
				{
					pos = find(killers[index].friends.begin(), killers[index].friends.end(), killers[i].id) - killers[index].friends.begin();
					killers[index].friends[pos] = -1;
					MPC += killers[index].P;
				}
			}
			//printf("%d ", index);
		}
		//printf("\n");
	}
	printf("%d\n", MPC);
	/*for(i = 0 ; i < N ; i++)
	{
		printf("El asesino %d es amigo de los asesinos y paga %d: ", killers[i].id, killers[i].P);
		for(j = 0 ; j < killers[i].friends.size() ; j++)
			printf("%d ", killers[i].friends[j]);
		printf("\n");
	}*/
	return 0;
}