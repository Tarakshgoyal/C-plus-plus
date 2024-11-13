#include<iostream>
using namespace std;
void odd(int x,int y)
{
    if(x>y)
    {
        for(int i=y;i<x;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        for(int i=x;i<y;i++)
        {
            if(i%2!=0)
            {
                cout<<i<<endl;
            }
        }
    }
    return;
}
int main()
{
    int n,m;
    cin>>n>>m;
    odd(n,m);
    return 0;
}