#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void removechar(string s,string str)
{
    if(str.length()==0)
    {
        cout<<s;
        return;
    }
    char ch=str[0];
    if(ch=='a')
    {
        removechar(s,str.substr(1));
    }
    else{
        removechar(s+ch,str.substr(1));
    }
}
int main()
{
    string str="Taraksh Goyal";
    removechar("",str);
}