#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define PB(v, m) v.push_back(m)
using namespace std;

int N, i;
string trash, name1, name2;
bool flag = false;

void unionSets(vector<char> set1, vector<char> set2) //Union de los conjuntos
{
	int i;
	vector<char> setPrint; //Conjunto Unión de salida
	if(set1.size() >= set2.size()) //Tomamos el conjunto más pequeño o del mismo tamaño
	{
		FOR(i, 0, set2.size(), 1)
			if(!binary_search(set1.begin(), set1.end(), set2[i]))
				PB(setPrint, set2[i]);
		FOR(i, 0, set1.size(), 1)
			if(!binary_search(setPrint.begin(), setPrint.end(), set1[i]))
				PB(setPrint, set1[i]);
	}
	else if(set1.size() < set2.size())
	{
		FOR(i, 0, set1.size(), 1)
			if(!binary_search(set2.begin(), set2.end(), set1[i]))
				PB(setPrint, set1[i]);
		FOR(i, 0, set2.size(), 1)
			if(!binary_search(setPrint.begin(), setPrint.end(), set2[i]))
				PB(setPrint, set2[i]);
	}
	sort(setPrint.begin(), setPrint.end());
	if(setPrint.size())
	{
		sort(setPrint.begin(), setPrint.end());
		cout << name1 << " U " << name2 << ": {" << setPrint[0];
		FOR(i, 1, setPrint.size(), 1)
			cout << ',' << setPrint[i];
		cout << "}\n";
	}
	else cout << name1 << " U " << name2 << ": {}\n";
}

void intersectionSets(vector<char> set1, vector<char> set2) //Intersección de los conjuntos
{
	int i;
	vector<char> setPrint; //Conjunto Intersección de salida
	if(set1.size() >= set2.size()) //Tomamos el conjunto más pequeño o del mismo tamaño
	{
		FOR(i, 0, set2.size(), 1)
			if(binary_search(set1.begin(), set1.end(), set2[i]))
				PB(setPrint, set2[i]);
	}
	else if(set1.size() < set2.size())
	{
		FOR(i, 0, set1.size(), 1)
			if(binary_search(set2.begin(), set2.end(), set1[i]))
				PB(setPrint, set1[i]);
	}
	sort(setPrint.begin(), setPrint.end());
	if(setPrint.size())
	{
		cout << name1 << " I " << name2 << ": {" << setPrint[0];
		FOR(i, 1, setPrint.size(), 1)
			cout << ',' << setPrint[i];
		cout << "}\n";
	}
	else cout << name1 << " I " << name2 << ": {}\n";
}

void differenceSets(vector<char> set1, vector<char> set2, bool flag) //Diferencia entre los conjuntos
{
	int i;
	vector<char> setPrint; //Conjunto Diferencia de salida
	FOR(i, 0, set1.size(), 1)
		if(!binary_search(set2.begin(), set2.end(), set1[i]))
			PB(setPrint, set1[i]);
	sort(setPrint.begin(), setPrint.end());
	if(!flag)	//Se valida cual diferencia de conjuntos estamos imprimiendo
		if(setPrint.size())
		{
			cout << name1 << " D " << name2 << ": {" << setPrint[0];
			FOR(i, 1, setPrint.size(), 1)
				cout << ',' << setPrint[i];
			cout << "}\n";
		}
		else cout << name1 << " D " << name2 << ": {}\n";
	else
		if(setPrint.size())
		{
			cout << name2 << " D " << name1 << ": {" << setPrint[0];
			FOR(i, 1, setPrint.size(), 1)
				cout << ',' << setPrint[i];
			cout << "}\n";
		}
		else cout << name2 << " D " << name1 << ": {}\n";
}

int main() 
{
	cin >> trash >> name1 >> N;
	vector<char> set1(N);
	
	FOR(i, 0, N, 1) //Llena conjunto 1
		cin >> set1[i];
		
	sort(set1.begin(), set1.end());
	cin >> trash >> name2 >> N;
	vector<char> set2(N);
	
	FOR(i, 0, N, 1) //Llena conjunto 2
		cin >> set2[i];
		
	sort(set2.begin(), set2.end());
	unionSets(set1, set2);
	intersectionSets(set1, set2);
	differenceSets(set1, set2, flag); flag = true;
	differenceSets(set2, set1, flag);
	return 0;
}