#include <cstdio>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
 
int N, i;
char digit;
string N1, N2, digits, zeros;
bool flag;
 
int toInt(string s)
{
	int N;
	stringstream ss;
	ss << s;
	ss >> N;
	return N;
}
 
int main()
{
	while(scanf("%d", &N) && N)
	{
		N1.clear();
		N2.clear();
		digits.clear();
		zeros.clear();
		flag = false;
		for(i = 0 ; i < N ; i++)
		{
			scanf(" %c", &digit);
			if(digit == '0') zeros.push_back(digit);
			else digits.push_back(digit);
		}
		sort(digits.begin(), digits.end());
		if(zeros.empty())
		{
			for(i = 0 ; i < N ; i++)
			{
				if(i % 2)
				{
					N2.push_back(digits[0]);
					digits.erase(0, 1);
				}
				else
				{
					N1.push_back(digits[0]);
					digits.erase(0, 1);
				}
			}
		}
		else
		{
			N1.push_back(digits[0]);
			digits.erase(0, 1);
			N2.push_back(digits[0]);
			digits.erase(0, 1);
			while(!zeros.empty())
			{
				if(!flag)
				{
					N1.push_back(zeros[0]);
					zeros.erase(0, 1);
					flag = true;
				}
				else
				{
					N2.push_back(zeros[0]);
					zeros.erase(0, 1);
					flag = false;
				}
			}
			flag = true;
			while(!digits.empty())
			{
				if(!flag)
				{
					N1.push_back(digits[0]);
					digits.erase(0, 1);
					flag = true;
				}
				else
				{
					N2.push_back(digits[0]);
					digits.erase(0, 1);
					flag = false;
				}
			}
		}
		printf("%d\n", toInt(N1) + toInt(N2));
	}
	return 0;
}
