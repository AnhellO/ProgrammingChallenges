#include <iostream>
#include <cstring>
#include <string>
using namespace std;

#define ciclo(i, a, b, c) for(i = a ; i < b ; i += c)
int i, j, cont = 0, most = -1;
string word;
char cannibal;

int main()
{
    cin >> word;
    if(word.length() == 1)
        cout << word;
    else
    {
        ciclo(i, 0, word.length(), 1)
        {
            cont = 0;
            ciclo(j, i + 1, word.length(), 1)
            {
                if(isupper(word[i]) != 0)
                    if(isupper(word[j]) != 0)
                        if(word[i] > word[j])
                            cont++;
                        else
                        {
                            if(cont > most)
                            {
                                most = cont;
                                cannibal = word[i];
                            }
                            else if(cont == most)
                                if(cannibal >= word[i])
                                    cannibal = word[i];
                            break;
                        }
                    else
                        cont++;
                else
                    if(islower(word[j]) != 0)
                        if(word[i] > word[j])
                            cont++;
                        else
                        {
                            if(cont > most)
                            {
                                most = cont;
                                cannibal = word[i];
                            }
                            else if(cont == most && isupper(cannibal) == 0)
                                if(cannibal >= word[i])
                                    cannibal = word[i];
                            break;
                        }
                    else
                    {
                        if(cont > most)
                        {
                            most = cont;
                            cannibal = word[i];
                        }
                        else if(cont == most && isupper(cannibal) == 0)
                            if(cannibal >= word[i])
                                cannibal = word[i];
                        break;
                    }
            }
            if(cont > most)
            {
                most = cont;
                cannibal = word[i];
            }
            else if(cont == most)
                if(cannibal >= word[i])
                    cannibal = word[i];
            //cout << cont << " " << most << endl;
        }
        cout << cannibal << endl;
    }
    return 0;
}
