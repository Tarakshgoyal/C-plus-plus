#include<iostream>
#include<vector>
#include<string>
using namespace std;
void per(string ans,string original)
{
    if(original=="")
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++)
    {
        char ch=original[i];
        string left= original.substr(0,i);
        string right=original.substr(i+1);
        per(ans+ch,left+right);
    }
}
int main()
{
    string str="abc";
    per("",str);
}