#include<iostream>
#include<vector>
using namespace std;
int count(vector<int> v)
{
    int c=0;
    for(int i=0;i<v.size();i++)
    {
        if (v[i]==0)
        {
            c=c+1;
        }
    }
    return c;
}
void sort(int x,vector<int> &v)
{
    for(int i=0;i<x;i++)
    {
        v[i]=0;
    }
    for(int i=x;i<v.size();i++)
    {
        v[i]=1;
    }
}
void display(vector <int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "; 
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    int x =count(v);
    sort(x,v);
    display(v);
    return 0;
}