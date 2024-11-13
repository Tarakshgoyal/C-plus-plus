#include<iostream>
using namespace std;
void sum1ton(int sum,int n)
{
    if(n==0)
    {
        cout<<sum<<endl;
        return;
    }
    sum1ton(sum+n,n-1);
}
int sum2(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum2(n-1);
}
int main()
{
    int n;
    cin>>n;
    sum1ton(0,n);
    cout<<sum2(n)<<endl;
}