#include<iostream>
#include<string>
using namespace std;
int main()
{
    // string s="abcdef";
    // cout<<s.substr(4)<<endl;
    // cout<<s.substr(2,2);
    string str;
    getline(cin,str);
    int len=str.length();
    cout<<
    str.substr(len/2);
}