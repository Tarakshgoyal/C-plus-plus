#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<"hello pw"<<endl;
    fun(n-1);
}
int product(int a,int b)
{
    return a*b;
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    // int x=product(2,4);
    // greet();
    // cout<<x;
    // int a=6;
    // int b=8;
    // cout<<a<<" "<<b<<endl;
    // swap(a,b);
    // cout<<a<<" "<<b;
}