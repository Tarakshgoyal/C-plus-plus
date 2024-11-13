#include<iostream>
using namespace std;
int square(int n)
{
    return n*n;
}
int countnumber(int m)
{
    int ans=0;
    while(m>0)
    {
        ans++;
        m=m/10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int numberofdigit=countnumber(n);
    cout<<square(numberofdigit);
    return 0;
}