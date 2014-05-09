#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
#include <ctime>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

struct tm date = {0, 0, 12};
int T, i, m, d, y;
string line;

void DatePlusDays(struct tm* date, int days)
{
    const time_t ONE_DAY = 24 * 60 * 60 ;
    time_t date_seconds = mktime(date) + (days * ONE_DAY) ;
    *date = *localtime(&date_seconds) ; ;
}

int toInteger(string n)
{
	int newN;
	stringstream ss;
	ss << n;
	ss >> newN;
	return newN;
}

int toMonth(string s)
{
	if(s == "Jan") return 1;
	else if(s == "Feb") return 2;
	else if(s == "Mar") return 3;
	else if(s == "Apr") return 4;
	else if(s == "May") return 5;
	else if(s == "Jun") return 6;
	else if(s == "Jul") return 7;
	else if(s == "Aug") return 8;
	else if(s == "Sep") return 9;
	else if(s == "Oct") return 10;
	else if(s == "Nov") return 11;
	else return 12;
}

string zodiac(int m, int d)
{
	if((m == 1 && d >= 21) || (m == 2 && d <= 19)) return "aquarius\n";
	else if((m == 2 && d >= 20) || (m == 3 && d <= 20)) return "pisces\n";
	else if((m == 3 && d >= 21) || (m == 4 && d <= 20)) return "aries\n";
	else if((m == 4 && d >= 21) || (m == 5 && d <= 21)) return "taurus\n";
	else if((m == 5 && d >= 22) || (m == 6 && d <= 21)) return "gemini\n";
	else if((m == 6 && d >= 22) || (m == 7 && d <= 22)) return "cancer\n";
	else if((m == 7 && d >= 23) || (m == 8 && d <= 21)) return "leo\n";
	else if((m == 8 && d >= 22) || (m == 9 && d <= 23)) return "virgo\n";
	else if((m == 9 && d >= 24) || (m == 10 && d <= 23)) return "libra\n";
	else if((m == 10 && d >= 24) || (m == 11 && d <= 22)) return "scorpio\n";
	else if((m == 11 && d >= 23) || (m == 12 && d <= 22)) return "sagittarius\n";
	else if((m == 12 && d >= 20) || (m == 1 && d <= 20)) return "capricorn\n";
}

int main() 
{
	cin >> T;
	FOR(i, 0, T, 1)
	{
		cout << i + 1 << ' ';
		cin >> line;
		m = toInteger(line.substr(0, 2));
		d = toInteger(line.substr(2, 2));
		y = toInteger(line.substr(4, 7));
		date.tm_mon = m - 1;
		date.tm_mday = d;
		date.tm_year = y - 1900;
		DatePlusDays(&date, 280); 
		line = asctime(&date);
		m = toMonth(line.substr(4, 3));
		d = toInteger(line.substr(8, 2));
		y = toInteger(line.substr(line.length() - 5, 4));
		if(m < 10) cout << 0;
		cout << m << ((d < 10) ? "/0" : "/") << d << '/' << y << ' ' << zodiac(m, d);
	}
	return 0;
}