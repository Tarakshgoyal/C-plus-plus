#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=1;i<(int)s.size();i+=2)
    {
        s[i]='#';
    }
    cout<<s;
}