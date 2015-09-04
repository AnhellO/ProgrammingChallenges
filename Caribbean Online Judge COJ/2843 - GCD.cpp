#include <cstdio>
#include <vector>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2843 - GCD
*
* Read all the input and store every number in a vector. Then for each ith element in the vector,
* get the GCD between it and the jth element, and compare with the higher value got from previous
* calculations of GCD
*/
int a;
vector<int> nums;

int gcd(int n1, int n2) //Eucliden one
{
    return (n2 == 0) ? n1 : gcd (n2, n1 % n2);
}

int getMaxGCD(vector<int> v) //Check for the highest GCD
{
	int i, j, max = 0;
	for(i = 0 ; i < v.size() ; i++)
		for(j = 0 ; j < v.size() ; j++)
			if(i != j)
				if(gcd(v[i], v[j]) > max)
					max = gcd(v[i], v[j]);
	return max;
}

int main() 
{
	while(scanf("%d", &a) != EOF) nums.push_back(a);
	printf("%d\n", getMaxGCD(nums));
	return 0;
}