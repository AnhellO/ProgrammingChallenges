#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
 
int N, C, B, i, j, k, l, m;
string numberR;
vector<string> pos;
 
int main()
{
	vector<map<char, int> > ops(4);
	map<char, int> m;
	vector<char> vacas;
	for(i = 0 ; i < 4 ; i++)
		for(j = 0 ; j < 10 ; j++)
			ops[i][j + '0'] = 1;
 
	ops[0].erase('0');
	/*for(i = 0 ; i < 4 ; i++)
	{
		for(map<char, int>::iterator it = ops[i].begin() ; it != ops[i].end() ; ++it)
		{
			cout << it->first << ' ';
		}
		cout << '\n';
	}*/
	cin >> N;
	while(N--)
	{
		cin >> numberR >> C >> B;
		vector<char> cc(C), bb(B);
		for(i = 0 ; i < C ; i++) cin >> cc[i];
		for(i = 0 ; i < B ; i++) cin >> bb[i];
		sort(cc.begin(), cc.end());
		sort(bb.begin(), bb.end());
		for(i = 0 ; i < 4 ; i++)
		{
			if(binary_search(cc.begin(), cc.end(), numberR[i]))
			{
				ops[i].erase(numberR[i]);
				vacas.push_back(numberR[i]);
			}
			else if(binary_search(bb.begin(), bb.end(), numberR[i]))
			{
				ops[(i+1)%4].erase(numberR[i]);
				ops[(i+2)%4].erase(numberR[i]);
				ops[(i+3)%4].erase(numberR[i]);
				ops[i] = m;
				ops[i][numberR[i]] = 1;
			}
			else
			{
				ops[i].erase(numberR[i]);
				ops[(i+1)%4].erase(numberR[i]);
				ops[(i+2)%4].erase(numberR[i]);
				ops[(i+3)%4].erase(numberR[i]);
			}
		}
	}
	for(map<char, int>::iterator it = ops[0].begin() ; it != ops[0].end() ; ++it)
	{
		for(map<char, int>::iterator it2 = ops[1].begin() ; it2 != ops[1].end() ; ++it2)
		{
			for(map<char, int>::iterator it3 = ops[2].begin() ; it3 != ops[2].end() ; ++it3)
			{
				for(map<char, int>::iterator it4 = ops[3].begin() ; it4 != ops[3].end() ; ++it4)
				{
 
					if(it->first != it2->first && it->first != it3->first && it->first != it4->first && it2->first != it3->first && it2->first != it4->first && it3->first != it4->first)
					{
						bool flag = true;
						for(i = 0 ; i < vacas.size() ; i++){
							if(!(vacas[i] == it->first || vacas[i] == it2->first ||vacas[i] == it3->first||vacas[i] == it4->first)) flag = false;
						}
						if(flag) cout << it->first << it2->first << it3->first << it4->first << '\n';
					}
				}
			}
		}
	}
	return 0;
}