#include <iostream>
#include <vector>
#include <cstdlib>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <cctype>
#define FOR(i, a, b, c) for(i = a ; i < b ; i += c)
using namespace std;

int t = 0, i, x, y;
string line;
vector<string> sections;
vector<string> split(const string&, const string&);
bool is_number(const string&);

int main()
{
    while(getline(cin, line))
    {
        if(t == 0)
        {
            t = atoi(line.c_str());
            if(!t) break;
            continue;
        }
        stack<int> postStack;
        queue<int> postQueue;
        priority_queue<int, vector<int>, greater<int> > postMinQueue;

        sections = split(line, " ");
        FOR(i, 0, sections.size(), 1)
        {
            if(is_number(sections[i]))
            {
                postStack.push(atoi(sections[i].c_str()));
                postQueue.push(atoi(sections[i].c_str()));
                postMinQueue.push(atoi(sections[i].c_str()));
            }
            else
            {
                if(sections[i] == "+")
                {
                    x = postStack.top();
                    postStack.pop();
                    y = postStack.top();
                    postStack.pop();
                    postStack.push(x + y);
                    x = postQueue.front();
                    postQueue.pop();
                    y = postQueue.front();
                    postQueue.pop();
                    postQueue.push(x + y);
                    x = postMinQueue.top();
                    postMinQueue.pop();
                    y = postMinQueue.top();
                    postMinQueue.pop();
                    postMinQueue.push(x + y);
                }
                else if(sections[i] == "-")
                {
                    x = postStack.top();
                    postStack.pop();
                    y = postStack.top();
                    postStack.pop();
                    postStack.push(y - x);
                    x = postQueue.front();
                    postQueue.pop();
                    y = postQueue.front();
                    postQueue.pop();
                    postQueue.push(y - x);
                    x = postMinQueue.top();
                    postMinQueue.pop();
                    y = postMinQueue.top();
                    postMinQueue.pop();
                    postMinQueue.push(y - x);
                }
                else if(sections[i] == "*")
                {
                    x = postStack.top();
                    postStack.pop();
                    y = postStack.top();
                    postStack.pop();
                    postStack.push(y * x);
                    x = postQueue.front();
                    postQueue.pop();
                    y = postQueue.front();
                    postQueue.pop();
                    postQueue.push(y * x);
                    x = postMinQueue.top();
                    postMinQueue.pop();
                    y = postMinQueue.top();
                    postMinQueue.pop();
                    postMinQueue.push(y * x);
                }
            }
        }
        cout << postStack.top() << " " << postQueue.front() << " " << postMinQueue.top() << "\n";
        postStack.pop(); postQueue.pop(); postMinQueue.pop();
        t--; if(!t) break;
    }
    return 0;
}

vector<string> split(const string& str, const string& delimiter)
{
    vector <string> tokens;

    string::size_type lastPos = 0;
    string::size_type pos = str.find(delimiter, lastPos);

    while (string::npos != pos)
    {
        tokens.push_back(str.substr(lastPos, pos - lastPos));
        lastPos = pos + delimiter.size();
        pos = str.find(delimiter, lastPos);
    }

    tokens.push_back(str.substr(lastPos, str.size() - lastPos));
    return tokens;
}


bool is_number(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
