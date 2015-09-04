#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
#include <cctype>
#include <bitset>
#include <sstream>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <iomanip>
#include <utility>
#define SIZE 8
#define MAX 200
using namespace std;

vector<string> split(string s, string regex)
{
	vector<string> sections;
	int pos = s.find_first_of(regex);
	string subS;
	while(pos != string::npos)
	{
		subS = s.substr(0, pos);
		s.erase(0, pos + 1);
		sections.push_back(subS);
		pos = s.find_first_of(regex);
	}
	sections.push_back(s);
	return sections;
}

vector<vector<char> > foundKing(vector<vector<char> > v, int x, int y) {
	vector<vector<char> > board = v;
	if(x - 1 >= 0 && y - 1 >= 0 && board[x - 1][y - 1] == '.') {
		board[x - 1][y - 1] = '#';
	}
	if(x - 1 >= 0 && board[x - 1][y] == '.') {
		board[x - 1][y] = '#';
	}
	if(x - 1 >= 0 && y + 1 < 8 && board[x - 1][y + 1] == '.') {
		board[x - 1][y + 1] = '#';
	}
	if(y + 1 < 8 && board[x][y + 1] == '.') {
		board[x][y + 1] = '#';
	}
	if(x + 1 < 8 && y + 1 < 8 && board[x + 1][y + 1] == '.') {
		board[x + 1][y + 1] = '#';
	}
	if(x + 1 < 8 && board[x + 1][y] == '.') {
		board[x + 1][y] = '#';
	}
	if(x + 1 < 8 && y - 1 >= 0 && board[x + 1][y - 1] == '.') {
		board[x + 1][y - 1] = '#';
	}
	if(y - 1 >= 0 && board[x][y - 1] == '.') {
		board[x][y - 1] = '#';
	}
	return board;
}

vector<vector<char> > foundQueen(vector<vector<char> > v, int x, int y) {
	vector<vector<char> > board = v;
	for(int i = x - 1 ; i >= 0 ; i--) {
		if(board[i][y] == '.' || board[i][y] == '#') {
			board[i][y] = '#';
		} else {
			break;
		}
	}
	for(int i = x + 1 ; i < 8 ; i++) {
		if(board[i][y] == '.' || board[i][y] == '#') {
			board[i][y] = '#';
		} else {
			break;
		}
	}
	for(int i = y - 1 ; i >= 0 ; i--) {
		if(board[x][i] == '.' || board[x][i] == '#') {
			board[x][i] = '#';
		} else {
			break;
		}
	}
	for(int i = y + 1 ; i < 8 ; i++) {
		if(board[x][i] == '.' || board[x][i] == '#') {
			board[x][i] = '#';
		} else {
			break;
		}
	}
	int i = x - 1;
	int j = y - 1;
	while(i >= 0 && j >= 0 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i--;
		j--;
	}
	i = x + 1;
	j = y + 1;
	while(i < 8 && j < 8 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i++;
		j++;
	}
	i = x - 1;
	j = y + 1;
	while(i >= 0 && j < 8 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i--;
		j++;
	}
	i = x + 1;
	j = y - 1;
	while(i < 8 && j >= 0 && (board[i][j] == '.' || board[i][j] == '#')) {
		//printf("%d %d\n", i, j);
		board[i][j] = '#';
		i++;
		j--;
	}
	return board;
}

vector<vector<char> > foundRook(vector<vector<char> > v, int x, int y) {
	vector<vector<char> > board = v;
	for(int i = x - 1 ; i >= 0 ; i--) {
		if(board[i][y] == '.' || board[i][y] == '#') {
			board[i][y] = '#';
		} else {
			break;
		}
	}
	for(int i = x + 1 ; i < 8 ; i++) {
		if(board[i][y] == '.' || board[i][y] == '#') {
			board[i][y] = '#';
		} else {
			break;
		}
	}
	for(int i = y - 1 ; i >= 0 ; i--) {
		if(board[x][i] == '.' || board[x][i] == '#') {
			board[x][i] = '#';
		} else {
			break;
		}
	}
	for(int i = y + 1 ; i < 8 ; i++) {
		if(board[x][i] == '.' || board[x][i] == '#') {
			board[x][i] = '#';
		} else {
			break;
		}
	}
	return board;
}

vector<vector<char> > foundBishop(vector<vector<char> > v, int x, int y) {
	vector<vector<char> > board = v;
	int i = x - 1;
	int j = y - 1;
	while(i >= 0 && j >= 0 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i--;
		j--;
	}
	i = x + 1;
	j = y + 1;
	while(i < 8 && j < 8 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i++;
		j++;
	}
	i = x - 1;
	j = y + 1;
	while(i >= 0 && j < 8 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i--;
		j++;
	}
	i = x + 1;
	j = y - 1;
	while(i < 8 && j >= 0 && (board[i][j] == '.' || board[i][j] == '#')) {
		board[i][j] = '#';
		i++;
		j--;
	}
	return board;
}

vector<vector<char> > foundKnight(vector<vector<char> > v, int x, int y) {
	vector<vector<char> > board = v;
	if(x - 1 >= 0 && y - 2 >= 0 && board[x - 1][y - 2] == '.') {
		board[x - 1][y - 2] = '#';
	}
	if(x - 2 >= 0 && y - 1 >= 0 && board[x - 2][y - 1] == '.') {
		board[x - 2][y - 1] = '#';
	}
	if(x - 2 >= 0 && y + 1 < 8 && board[x - 2][y + 1] == '.') {
		board[x - 2][y + 1] = '#';
	}
	if(x - 1 >= 0 && y + 2 < 8 && board[x - 1][y + 2] == '.') {
		board[x - 1][y + 2] = '#';
	}
	if(x + 1 < 8 && y + 2 < 8 && board[x + 1][y + 2] == '.') {
		board[x + 1][y + 2] = '#';
	}
	if(x + 2 < 8 && y + 1 < 8 && board[x + 2][y + 1] == '.') {
		board[x + 2][y + 1] = '#';
	}
	if(x + 2 < 8 && y - 1 >= 0 && board[x + 2][y - 1] == '.') {
		board[x + 2][y - 1] = '#';
	}
	if(x + 1 < 8 && y - 2 >= 0 && board[x + 1][y - 2] == '.') {
		board[x + 1][y - 2] = '#';
	}
	return board;
}

vector<vector<char> > foundPawn(vector<vector<char> > v, int x, int y, char c) {
	vector<vector<char> > board = v;
	if(islower(c)) {
		if(x + 1 < 8 && y - 1 >= 0 && board[x + 1][y - 1] == '.') {
			board[x + 1][y - 1] = '#';
		}
		if(x + 1 < 8 && y + 1 < 8 && board[x + 1][y + 1] == '.') {
			board[x + 1][y + 1] = '#';
		}
	} else {
		if(x - 1 >= 0 && y - 1 >= 0 && board[x - 1][y - 1] == '.') {
			board[x - 1][y - 1] = '#';
		}
		if(x - 1 >= 0 && y + 1 < 8 && board[x - 1][y + 1] == '.') {
			board[x - 1][y + 1] = '#';
		}
	}
	return board;
}

int main() {
	char s[MAX];
	while(scanf(" %s", &s) != EOF) {
		vector<string> v = split(s, "/");
		vector<vector<char> > board(8);
		for(int i = 0 ; i < 8 ; i++) {
			for(int j = 0 ; j < v[i].size() ; j++) {
				if(isdigit(v[i][j])) {
					board[i].insert(board[i].end(), v[i][j] - '0', '.');
				} else {
					board[i].push_back(v[i][j]);
				}
			}
		}
		for(int i = 0 ; i < 8 ; i++) {
			for(int j = 0 ; j < 8 ; j++) {
				if(board[i][j] == 'k' || board[i][j] == 'K') {
					board = foundKing(board, i, j);
				} else if(board[i][j] == 'q' || board[i][j] == 'Q') {
					board = foundQueen(board, i, j);
				} else if(board[i][j] == 'r' || board[i][j] == 'R') {
					board = foundRook(board, i, j);
				} else if(board[i][j] == 'b' || board[i][j] == 'B') {
					board = foundBishop(board, i, j);
				} else if(board[i][j] == 'n' || board[i][j] == 'N') {
					board = foundKnight(board, i, j);
				} else if(board[i][j] == 'p' || board[i][j] == 'P') {
					board = foundPawn(board, i, j, board[i][j]);
				}
			}
		}
		int freeSq = 0;
		for(int i = 0 ; i < 8 ; i++) {
			for(int j = 0 ; j < 8 ; j++) {
				if(board[i][j] == '.') {
					freeSq++;
				}
				//printf("%c ", board[i][j]);
			}
			//printf("\n");
		}
		printf("%d\n", freeSq);
	}
	return 0;
}