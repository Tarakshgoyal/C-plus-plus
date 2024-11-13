#include<iostream>
using namespace std;
void startriangle(int x)
{
    for(int k=1;k<=x;k++)
    {
        for(int i=1;i<=k;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void greeting()
{
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day"<<endl;
}
int main()
{
    greeting();
    greeting();
    greeting();
    startriangle(3);
    startriangle(4);
    startriangle(5);
    return 0;
}