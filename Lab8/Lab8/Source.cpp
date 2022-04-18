#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>

using namespace std;

class MyCmp
{
public:
    bool operator()(const pair<string, int>& a, const pair<string, int>& b) const
    {
        if (a.second == b.second)
        {
            return a.first > b.first;
        }

        return a.second < b.second;
    }
};


int main()
{
    fstream fin("Text.txt", ios::in);

    string s;
    string separatori = " ,?!.";
    vector<string> v;
    map<string, int> m;
    priority_queue<pair<string, int>, vector<pair<string, int>>, MyCmp> q;

    getline(fin, s);


    int idx = s.find_first_of(separatori);
    int prev = 0;

    while (idx != string::npos)
    {
        string tmp = s.substr(prev, idx - prev);
        if (tmp.size() > 0)
        {
            transform(tmp.begin(), tmp.end(), tmp.begin(), [](char c) { return tolower(c); });
            v.push_back(tmp);
        }
        prev = idx + 1;
        idx = s.find_first_of(separatori, prev);
    }

    for (auto it : v)
    {
        m[it]++;
    }


    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;

        q.push(it);
    }

    cout << endl;

    while (!q.empty())
    {
        auto it = q.top();
        cout << it.first << " => " << it.second << endl;
        q.pop();
    }

    return 0;
}