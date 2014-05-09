#include <cstdio>
#include <utility>
#include <vector>
#include <algorithm>
#define W(T) while(T--)
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct predicate
{
    bool operator()(const std::pair<int, int> &left, const std::pair<int, int> &right) 
    {
         return left.first < right.first;
    }
};
int H, N, i;
char card[2];

vector<pair<int, int> > initBubbleSort(vector<pair<int, int> > cards)
{
	int i, j, k;
	pair<int, int> aux;
	sort(cards.begin(), cards.end(), predicate());
	FOR(k, 0, cards.size(), 1)
	{
		if(cards[k + 1].first == cards[k].first)
		{
			FOR(i, k, cards.size(), 1)
			{
				FOR(j, k, cards.size() - 1, 1)
				{
					if(cards[j].second > cards[j + 1].second && cards[j].first >= cards[j + 1].first)
					{
						aux = cards[j];
						cards[j] = cards[j + 1];
						cards[j + 1] = aux;
					}
				}
			}
		}
	}
	return cards;
}

int main() 
{
	scanf("%d", &H);
	W(H)
	{
		scanf("%d", &N);
		vector<pair<int, int> > cards(N);
		FOR(i, 0, N, 1)
		{
			scanf("%s", &card);
			if(card[0] == 'A') cards[i].first = 1;
			else if(card[0] == '2') cards[i].first = 2;
			else if(card[0] == '3') cards[i].first = 3;
			else if(card[0] == '4') cards[i].first = 4;
			else if(card[0] == '5') cards[i].first = 5;
			else if(card[0] == '6') cards[i].first = 6;
			else if(card[0] == '7') cards[i].first = 7;
			else if(card[0] == '8') cards[i].first = 8;
			else if(card[0] == '9') cards[i].first = 9;
			else if(card[0] == 'T') cards[i].first = 10;
			else if(card[0] == 'J') cards[i].first = 11;
			else if(card[0] == 'Q') cards[i].first = 12;
			else if(card[0] == 'K') cards[i].first = 13;
			if(card[1] == 'S') cards[i].second = 1;
			else if(card[1] == 'H') cards[i].second = 2;
			else if(card[1] == 'C') cards[i].second = 3;
			else if(card[1] == 'D') cards[i].second = 4;
		}
		cards = initBubbleSort(cards);
		if(cards[0].first == 1) printf("A");
		else if(cards[0].first == 10) printf("T");
		else if(cards[0].first == 11) printf("J");
		else if(cards[0].first == 12) printf("Q");
		else if(cards[0].first == 13) printf("K");
		else printf("%d", cards[0].first);
		if(cards[1].second == 1) printf("S");
		else if(cards[1].second == 2) printf("H");
		else if(cards[1].second == 3) printf("C");
		else printf("D");
		FOR(i, 1, N, 1)
		{
			if(cards[i].first == 1) printf(" A");
			else if(cards[i].first == 10) printf(" T");
			else if(cards[i].first == 11) printf(" J");
			else if(cards[i].first == 12) printf(" Q");
			else if(cards[i].first == 13) printf(" K");
			else printf(" %d", cards[i].first);
			if(cards[i].second == 1) printf("S");
			else if(cards[i].second == 2) printf("H");
			else if(cards[i].second == 3) printf("C");
			else printf("D");
		}
		printf("\n");
	}
	return 0;
}