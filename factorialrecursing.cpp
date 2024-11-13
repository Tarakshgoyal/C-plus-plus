#include<iostream>
using namespace std;
int factrec(int n)
{
    if(n==1 ||n==0 )
    {
        return 1;
    }
    return n*factrec(n-1);
}
void factupto(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
        cout<<f<<endl;
    }
}
int fact(int n)
{
    int f=1;
    for(int i=2;i<=n;i++)
    {
        f*=i;
    }
    return f;
}
int main()
{
    int n;
    cin>>n;
    // cout<<fact(n);
    cout<<factrec(n);
}