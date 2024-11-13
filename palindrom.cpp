#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i=0;
    int j=(int)s.size()-1;
    int b;
    while(i<=j)
    {
        if(s[i]==s[j])
        {
            b=1;
        }
        else
        {
            b=0;
            break;
        }
        i++;
        j--;
    }
    if(b==1)
    {
        cout<<"its a pallindrom";
    }
    else
    {
        cout<<"nope";
    }
}