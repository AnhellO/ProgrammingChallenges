#include <iostream>
#include <cstring>
#include <string>
#define W(T) while(T--)
using namespace std;

int t;
string dialog;

bool checkDialog(string dialog)
{
	int validate = 0;
	while(validate < dialog.length())
	{
		if(dialog[validate] == 'p') 
		{
			if(validate + 4 >= dialog.length() || dialog[validate + 1] != 'u' || dialog[validate + 2] != 't' || dialog[validate + 3] != 'o' || dialog[validate + 4] != 'n') 
				return false;
			validate += 5;
		}
		else if(dialog[validate] == 'o') 
		{
			if(validate + 2 >= dialog.length()) return false;
			if(dialog[validate + 1] == 'n') 
			{
				if(dialog[validate + 2] != 'e') return false;
				validate += 3;
			}
			else 
			{
				if(dialog[validate + 1] != 'u' || dialog[validate + 2] != 't') return false;
				if(validate + 5 >= dialog.length() || dialog[validate + 3] != 'p' || dialog[validate + 4] != 'u' || dialog[validate + 5] != 't') 
					validate += 3;
				else 
				{
					if(validate + 7 >= dialog.length() || dialog[validate + 6] != 'o' || dialog[validate + 7] != 'n') 
						validate += 6;
					else 
					{
						if(validate + 8 >= dialog.length() || dialog[validate + 8] != 'e') validate += 3;
						else validate += 6;
					}
				}
			}
		}
		else if(dialog[validate] == 'i')
		{
			if(validate + 1 >= dialog.length()) return false;
			if(dialog[validate + 1] != 'n') return false;
			if(validate + 4 >= dialog.length() || dialog[validate + 2] != 'p' || dialog[validate + 3] != 'u' || dialog[validate + 4] != 't') 
				validate += 2;
			else 
			{
				if(validate + 6 >= dialog.length() || dialog[validate + 5] != 'o' || dialog[validate + 6] != 'n') 
					validate += 5;
				else 
				{
					if(validate + 7 >= dialog.length() || dialog[validate + 7] != 'e') validate += 2;
					else validate += 5;
				}
			}
		}
		else return false;
	}
	return true;
}

int main() 
{
	cin >> t;
	W(t)
	{
		cin >> dialog;
		cout << ((checkDialog(dialog)) ? "YES\n" : "NO\n");
	}
	return 0;
}