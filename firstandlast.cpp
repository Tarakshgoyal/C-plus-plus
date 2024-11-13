#include<iostream>
using namespace std;
void fl(int *x,int *y,int n)
{
    *x=n%10;
    while(n>9)
    {
        n/=10;
    }
    *y=n;
    return;
}

int main()
{
    int n;
    cin>>n;
    int a,b;
    fl(&a,&b,n);
    cout<<"1st digit is "<<b<<" last digit is "<<a;
    return 0;
}
