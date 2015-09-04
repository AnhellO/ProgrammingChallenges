#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
* Author: Angel Santiago Jaime Zavala (AnhellO)
* Caribbean Online Judge COJ: 2347 - Helping The Watchmaker
*
* Input manipulated as strings, reading it and, if a space exist (the time has am, pm, hrs, etc.)
* split first by the space, and then by the ":". Store the correct time formats on arrays and sort 
* them, to approach of the usage of binary search. If the time is in 24 format, search in hours1, 
* minutes, and format24, else if it is in 12 format, search in hours2, minutes and format12, other way
* the time given is invalid
*/
string minutes[] = {"00", "01", "02", "03", "04", "05", "06", "07", "08", "09",
		"10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24",
		"25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40",
		"41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56",
		"57", "58", "59"}; //Usage on both time formats
string hours1[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
        "00", "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11",
        "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23"}; //24 format
string hours2[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9",
        "01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11", "12"}; //12 format
string format12[] = {"am", "aM", "Am", "AM", "pm", "pM", "Pm", "PM"}; //12 format
string format24[] = {"hrs", "Hrs", "hRs", "hrS", "HRs", "hRS", "HrS", "HRS"}; //24 format

string line;

vector<string> split(string s, string regex) //Split implementation
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

int main() 
{
	sort(minutes, minutes + 60); //Sort the tables lexicographically
	sort(hours1, hours1 + 34);
	sort(hours2, hours2 + 21);
	sort(format12, format12 + 8);
	sort(format24, format24 + 8);
	while(getline(cin, line))
	{
		if(line.find(" ") != string::npos) //If has a format specifier
		{
			vector<string> sections1 = split(line, " "); //Split first by space and then by ":" expression, then check if is a valid time
			vector<string> sections2 = split(sections1[0], ":");
			if(binary_search(hours1, hours1 + 34, sections2[0]) && binary_search(minutes, minutes + 60, sections2[1]) && binary_search(format24, format24 + 8, sections1[1]))
				cout << "VALID\n";
			else if(binary_search(hours2, hours2 + 21, sections2[0]) && binary_search(minutes, minutes + 60, sections2[1]) && binary_search(format12, format12 + 8, sections1[1]))
				cout << "VALID\n";
			else
				cout << "INVALID\n";
		}
		else //Othe way, just split by ":" expression and check
		{
			vector<string> sections1 = split(line, ":");
			if(binary_search(hours1, hours1 + 34, sections1[0]) && binary_search(minutes, minutes + 60, sections1[1]))
				cout << "VALID\n";
			else if(binary_search(hours2, hours2 + 21, sections1[0]) && binary_search(minutes, minutes + 60, sections1[1]))
				cout << "VALID\n";
			else
				cout << "INVALID\n";
		}
	}
	return 0;
}