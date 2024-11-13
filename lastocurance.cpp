#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v[i]=x;
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    int target;
    cin>> target;
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi)
    {
        int mid=lo+(hi-lo)/2;
        if(v[mid]<=target)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans;
}