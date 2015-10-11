#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
 
struct Alpha
{
	char id;
	vector<string> v;
};
 
int N, i, j, nCases = 0;
string sequence, s;
 
bool predicate(const string& s1, const string& s2)
{
    int i;
    if(s1.length() < s2.length() && s2.find(s1) != string::npos) return true;
    if(s1.length() > s2.length() && s1.find(s2) != string::npos) return false;
    for(i = 0 ; s1[i] && s2[i] ; i++)
    {
        if(s1[i] == s2[i]) continue;
        else break;
    }
    //if(s1[i] == s2[i]) return 0;
    if(sequence.find(s1[i]) > sequence.find(s2[i])) return false;
    return true;
}
 
/*vector<string> initBubbleSort(vector<string> V)
{
	int i, j, k, N;
	string aux;
	for(i = 0 ; i < V.size() ; i++)
	{
		for(j = 0 ; j < V.size() - 1 ; j++)
		{
			if(ic_strcmp(V[j], V[j + 1]) > 0)
			{
				aux = V[j];
				V[j] = V[j + 1];
				V[j + 1] = aux;
			}
		}
	}
	return V;
}*/
 
int main()
{
	//sequence = "UVWXYZNOPQRSTHIJKLMABCDEFG";
	//cout << sequence.find("W") << ' ' << sequence.find("X") << endl;
	while(cin >> N && N)
	{
		cout << "year " << ++nCases << '\n';
		cin >> sequence;
		vector<Alpha> V(26);
		for(i = 0 ; i < 26 ; i++) V[i].id = sequence[i];
		while(N--)
		{
			cin >> s;
			for(i = 0 ; i < 26 ; i++)
				if(V[i].id == s[0])
					V[i].v.push_back(s);
		}
		for(i = 0 ; i < 26 ; i++) sort(V[i].v.begin(), V[i].v.end(), &predicate);//V[i].v = initBubbleSort(V[i].v);
		for(i = 0 ; i < 26 ; i++)
		{
			if(V[i].v.empty()) continue;
			for(j = 0 ; j < V[i].v.size() ; j++) cout << V[i].v[j] << '\n';
		}
	}
	return 0;
}
