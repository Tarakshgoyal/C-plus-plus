#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<(int)s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            continue;
        }
        else{
            count++;
        }
    }
    cout<<count;
}