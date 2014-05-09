#include <iostream>
#include <cstring>
#include <string>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
#define SET(c) c = 0
using namespace std;
/*
* Angel Jaime
* 1215 - Binary Clock - COJ
* Brute Force
*/
int T, i, j, cont = 0, sum = 0;
string line, out = "";

int main() 
{
	cin >> T;
	FOR(j, 0, T, 1)
	{
		cin >> line;
		out.clear(); //Limpiar, limpiar, limpiar..... :V
		SET(cont);
		SET(sum);
		for(i = 0 ; cont < 2 ; i++) //Obtenemos primer digito de las horas
		{
			if(line[i] == '*' && cont == 0) out.push_back('2');
			else if(line[i] == '*' && cont == 1) out.push_back('1');
			else if(line[i] == ')') cont++;
		}
		if(!out.length()) out.push_back('0');
		SET(cont);
		SET(sum);
		for(i = i ; cont < 4 ; i++) //Obtenemos segundo digito de las horas
		{
			if(line[i] == '*' && cont == 0) sum += 8;
			else if(line[i] == '*' && cont == 1) sum += 4;
			else if(line[i] == '*' && cont == 2) sum += 2;
			else if(line[i] == '*' && cont == 3) sum += 1;
			else if(line[i] == ')') cont++;
		}
		out.push_back(sum + '0'); //Saca el ASCII XD
		out.push_back(':');
		SET(cont);
		SET(sum);
		for(i = i ; cont < 3 ; i++) //Obtenemos primer digito de los minutos
		{
			if(line[i] == '*' && cont == 0) sum += 4;
			else if(line[i] == '*' && cont == 1) sum += 2;
			else if(line[i] == '*' && cont == 2) sum += 1;
			else if(line[i] == ')') cont++;
		}
		out.push_back(sum + '0');
		SET(cont);
		SET(sum);
		for(i = i ; cont < 4 ; i++) //Obtenemos segundo digito de los minutos
		{
			if(line[i] == '*' && cont == 0) sum += 8;
			else if(line[i] == '*' && cont == 1) sum += 4;
			else if(line[i] == '*' && cont == 2) sum += 2;
			else if(line[i] == '*' && cont == 3) sum += 1;
			else if(line[i] == ')') cont++;
		}
		out.push_back(sum + '0');
		out.push_back(':');
		SET(cont);
		SET(sum);
		for(i = i ; cont < 3 ; i++) //Obtenemos primer digito de los segundos
		{
			if(line[i] == '*' && cont == 0) sum += 4;
			else if(line[i] == '*' && cont == 1) sum += 2;
			else if(line[i] == '*' && cont == 2) sum += 1;
			else if(line[i] == ')') cont++;
		}
		out.push_back(sum + '0');
		SET(cont);
		SET(sum);
		for(i = i ; cont < 4 ; i++) //Obtenemos segundo digito de los segundos
		{
			if(line[i] == '*' && cont == 0) sum += 8;
			else if(line[i] == '*' && cont == 1) sum += 4;
			else if(line[i] == '*' && cont == 2) sum += 2;
			else if(line[i] == '*' && cont == 3) sum += 1;
			else if(line[i] == ')') cont++;
		}
		out.push_back(sum + '0');
		SET(cont);
		SET(sum);
		cout << "Case " << j + 1 << ": " << out << '\n';
	}
	return 0;
}