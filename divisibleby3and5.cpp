#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number";
    cin>>num;
    if (num%3==0 && num%5==0)
    {
        cout<<"valied";
    }
    else
    {
        cout<<"invalied";
    }
    return 0;
}