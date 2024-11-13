#include<iostream>
#include<vector>
#include<string>
using namespace std;
void arrsubset(int arr[],int n,int idx,vector<int> v)
{
    if(idx==n)
    {
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    arrsubset(arr,n,idx+1,v);
    v.push_back(arr[idx]);
    arrsubset(arr,n,idx+1,v);
}
int main()
{
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    arrsubset(arr,n,0,v);
}