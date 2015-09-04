#include <bits/stdc++.h>
using namespace std;

int A, B, C, i, trucks = 0, cost = 0, f1 = 0, f2 = 0, f3 = 0;
pair<int, int> t1, t2, t3;

int main()
{
	scanf("%d %d %d %d %d %d %d %d %d", &A, &B, &C, &t1.first, &t1.second, &t2.first, &t2.second, &t3.first, &t3.second);
	for(i = min(t1.first, min(t2.first, t3.first)) ; i <= max(t1.second, max(t2.second, t3.second)) ; i++)
	{
		if(i >= t1.first && !f1) trucks++, f1 = 1;
		if(t1.second <= i && f1 == 1) trucks--, f1 = 2;
		if(i >= t2.first && !f2) trucks++, f2 = 1;
		if(t2.second <= i && f2 == 1) trucks--, f2 = 2;
		if(i >= t3.first && !f3) trucks++, f3 = 1;
		if(t3.second <= i && f3 == 1) trucks--, f3 = 2;
		if(trucks == 1) cost += A;
		else if(trucks == 2) cost += (B * 2);
		else if(trucks == 3) cost += (C * 3);
		//printf("%d: %d %d\n", i, trucks, cost);
	}
	printf("%d\n", cost);
	return 0;
}