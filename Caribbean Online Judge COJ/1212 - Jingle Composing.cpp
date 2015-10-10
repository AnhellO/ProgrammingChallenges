#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
using namespace std;

size_t i;
int correct;
string composition;
vector<string> sections;
vector<string> split(string, string);
float measures(string);

int main()
{
    while(cin >> composition)
    {
        if(composition.compare("*") == 0)
            break;
        correct = 0;
        sections = split(composition, "/");
        for(i = 0 ; i < sections.size() ; i++)
        {
            if(measures(sections[i].c_str()) == 1.0)
                correct++;
            //cout << sections[i].c_str() << endl;
        }
        printf("%d\n", correct);
    }
    return 0;
}

vector<string> split(string str, string sep)
{
    char* cstr = const_cast<char*>(str.c_str());
    char* current;
    vector<string> arr;
    current = strtok(cstr,sep.c_str());
    while(current != NULL){
        arr.push_back(current);
        current=strtok(NULL,sep.c_str());
    }
    return arr;
}

float measures(string str)
{
    size_t j;
    float sum = 0.0;
    for(j = 0 ; j < str.length() ; j++)
    {
        if(str.at(j) == 'W')
            sum += 1.0;
        else if(str.at(j) == 'H')
            sum += (float) 1 / 2;
        else if(str.at(j) == 'Q')
            sum += (float) 1 / 4;
        else if(str.at(j) == 'E')
            sum += (float) 1 / 8;
        else if(str.at(j) == 'S')
            sum += (float) 1 / 16;
        else if(str.at(j) == 'T')
            sum += (float) 1 / 32;
        else if(str.at(j) == 'X')
            sum += (float) 1 / 64;
    }
    return sum;
}