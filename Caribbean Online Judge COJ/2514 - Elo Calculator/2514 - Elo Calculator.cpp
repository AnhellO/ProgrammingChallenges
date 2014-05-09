#include <iostream>
#define W(T) while(T--)
using namespace std;

int N, i, Ra, K;
double W, We, eloM = 0.0;
string tournament, name;

double updateRating(double Ra, int K, double W, double We)
{
	return Ra + K * (W - We);
}

int main() 
{
	cout.precision(0);
	cin >> tournament >> N;
	i = N;
	cout << "Tournament: " << tournament << "\nNumber of players: " << N << "\nNew ratings:\n";
	W(N)
	{
		cin >> name >> Ra >> W >> We >> K;
		eloM += Ra;
		cout << fixed << name << ' ' << updateRating(Ra, K, W, We) << '\n';
	}
	cout << "Media Elo: " << eloM / i << '\n';
	return 0;
}