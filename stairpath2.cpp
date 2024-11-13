#include<iostream>
using namespace std;
int stair(int n)
{
    if(n==2)
    {
        return 2;
    }
    if(n==1)
    {
        return 1;
    }
    return stair(n-2)+stair(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<stair(n)<<endl;
}