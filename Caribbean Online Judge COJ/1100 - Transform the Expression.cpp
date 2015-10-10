#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int t, i;
string s, alpha = "abcdefghijklmnopqrstuvwxyz";

int precedence(char c)
{
	if(c == '^') return 4;
	else if(c == '*' || c == '/') return 3;
	else if(c == '-' || c == '+') return 2;
	else return 1;
}

int main()
{
	cin >> t;
	while(t--)
	{
		queue<char> in, out;
		stack<char> op1;
		cin >> s;
		for(i = 0 ; i < s.length() ; i++) in.push(s[i]);
		while(!in.empty())
		{
			if(binary_search(alpha.begin(), alpha.end(), in.front())) out.push(in.front());
			else if(in.front() == '(') op1.push(in.front());
			else if(in.front() == ')')
			{
				while(op1.top() != '(')
				{
					out.push(op1.top());
					op1.pop();
				}
				op1.pop();
			}
			else
			{
				if(op1.empty() || precedence(in.front()) > precedence(op1.top())) op1.push(in.front());
				else
				{
					while(precedence(in.front()) < precedence(op1.top()))
					{
						out.push(op1.top());
						op1.pop();
					}
					op1.push(in.front());
				}
			}
			in.pop();
		}
		while(!op1.empty())
		{
			out.push(op1.top());
			op1.pop();
		}
		while(!out.empty())
		{
			cout << out.front();
			out.pop();
		}
		cout << '\n';
	}
	return 0;
}