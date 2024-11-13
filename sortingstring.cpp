#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());//here order followed to sort thing is ascii value order
    cout<<s;
}