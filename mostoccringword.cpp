#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    stringstream ss;
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << v.size();
    sort(v.begin(), v.end());
    int count = 1;
    int maxcount = 1;
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << endl;
        if (v[i] == v[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        maxcount = max(maxcount, count);
    }
    cout << maxcount;
}