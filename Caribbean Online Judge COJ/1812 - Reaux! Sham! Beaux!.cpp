#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;

string c, name1, name2, p1, p2;
string rock[11] = {"Kamen", "Rock", "Pierre", "Stein", "Ko", "Koe", "Sasso", "Roccia", "Guu", "Kamien", "Piedra"};
string scissor[10] = {"Nuzky", "Scissors", "Ciseaux", "Schere", "Ollo", "Olloo", "Forbice", "Choki", "Nozyce", "Tijera"};
string paper[10] = {"Papir", "Paper", "Feuille", "Papier", "Papir", "Carta", "Rete", "Paa", "Papier", "Papel"};
int i, j, sc1, sc2;

int main()
{
	
	for(i = 1 ; ; i++)
	{
		sc1 = sc2 = 0;
		cin >> c >> name1;
		cin >> c >> name2;
		while(cin >> p1 && (p1 != "-" && p1 != "."))
		{
			cin >> p2;
			if(find(rock, rock + 11, p1) != rock + 11 && find(scissor, scissor + 10, p2) != scissor + 10) sc1++;
			else if(find(scissor, scissor + 10, p1) != scissor + 10 && find(paper, paper + 10, p2) != paper + 10) sc1++;
			else if(find(paper, paper + 10, p1) != paper + 10 && find(rock, rock + 11, p2) != rock + 11) sc1++;
			else if(find(rock, rock + 11, p2) != rock + 11 && find(scissor, scissor + 10, p1) != scissor + 10) sc2++;
			else if(find(scissor, scissor + 10, p2) != scissor + 10 && find(paper, paper + 10, p1) != paper + 10) sc2++;
			else if(find(paper, paper + 10, p2) != paper + 10 && find(rock, rock + 11, p1) != rock + 11) sc2++;
		}
		if(p1 == "." || p1 == "-")
		{
			cout << "Game #" << i << ":\n";
			cout << name1 << ": ";
			(sc1 == 1) ? cout << "1 point\n" : cout << sc1 << " points\n";
			cout << name2 << ": ";
			(sc2 == 1) ? cout << "1 point\n" : cout << sc2 << " points\n";
			(sc1 == sc2) ? cout << "TIED GAME\n\n" : ((sc1 > sc2) ? cout << "WINNER: " << name1 << "\n\n" : cout << "WINNER: " << name2 << "\n\n");
			if(p1 == ".") break;
		}
	}
	return 0;
}