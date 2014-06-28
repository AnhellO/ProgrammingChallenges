#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string _1[] = {"***", "  *", "***", "***", "* *", "***", "***", "***", "***", "***"};
string _2[] = {"* *", "  *", "  *", "  *", "* *", "*  ", "*  ", "  *", "* *", "* *"};
string _3[] = {"* *", "  *", "***", "***", "***", "***", "***", "  *", "***", "***"};
string _4[] = {"* *", "  *", "*  ", "  *", "  *", "  *", "* *", "  *", "* *", "  *"};
string _5[] = {"***", "  *", "***", "***", "  *", "***", "***", "  *", "***", "***"};
int i;
string line;
vector<vector<string> > parts(5), digits(5);

string toDigits()
{
	int i, j, k, N;
	bool flag;
	string s = "";
	stringstream ss;
	
	for(i = 0 ; i < parts[0].size() ; i++)
	{
		for(j = 0 ; j < 10 ; j++)
		{
			flag = true;
			for(k = 0 ; k < 5 ; k++)
			{
				if(parts[k][i] != digits[k][j])
				{
					flag = false;
					//cout << "Equivocado\n";
					break;
				}
			}
			if(flag)
			{
				//cout << "Encontrado\n";
				s.push_back(j + '0');
				break;
			}
			//cout << s << endl;
		}
		if(j == 10) return "BOOM!!\n";
	}
	ss << s;
	ss >> N;
	//cout << s << ' ' << N << endl;
	return (N % 6) ? "BOOM!!\n" : "BEER!!\n";
}

int main()
{
	digits[0].assign(_1, _1 + 10);
	digits[1].assign(_2, _2 + 10);
	digits[2].assign(_3, _3 + 10);
	digits[3].assign(_4, _4 + 10);
	digits[4].assign(_5, _5 + 10);
	for(i = 0 ; i < 5 ; i++)
	{
		getline(cin, line);
		while(!line.empty())
		{
			parts[i].push_back(line.substr(0, 3));
			line.erase(0, 4);
		}
	}
	cout << toDigits();
	/*for(i = 0 ; i < 5 ; i++)
	{
		for(j = 0 ; j < parts[i].size() ; j++)
			cout << parts[i][j] << ' ';
		cout << '\n';
	}*/
	return 0;
}