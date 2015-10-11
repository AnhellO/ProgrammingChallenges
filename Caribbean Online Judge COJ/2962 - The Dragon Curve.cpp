#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int N;
string s = "LLRLLRRLLLRRLRRLLLRLLRRRLLRRLRR";

string dragonCurve(string s, int N)
{
	if(N == 5) return s;
	string temp = s;
	temp[temp.length() / 2] = (temp[temp.length() / 2] == 'R') ? 'L' : 'R';
	return dragonCurve(s + "L" + temp, N - 1);
}

int main()
{
	while(cin >> N && N != -1)
	{
		if(!N) cout << '\n';
		else if(N == 1) cout << "L\n";
		else if(N == 2) cout << "LLR\n";
		else if(N == 3) cout << "LLRLLRR\n";
		else if(N == 4) cout << "LLRLLRRLLLRRLRR\n";
		else if(N == 5) cout << "LLRLLRRLLLRRLRRLLLRLLRRRLLRRLRR\n";
		else cout << dragonCurve(s, N) << '\n';
	}
	return 0;
}