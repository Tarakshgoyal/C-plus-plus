#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>& res)
{
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size() && j<b.size())
    {
        if(a[i]>b[j])
        {
            res[k]=a[i];
            i++;
        }
        else{
            res[k]=b[j];
            j++;
        }
        k++;
        if(i==a.size())
        {
            while(j<b.size())
            {
                res[k]=b[j];
                j++;
                k++;
            }
        }
        if(j==b.size())
        {
            while(i<a.size())
            {
                res[k]=a[i];
                i++;
                k++;
            }
        }
    }
    return;
}
void mergesortrev(vector<int>& v)
{
    int n=v.size();
    if(n==1)
    {
        return;
    }
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++)
    {
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i]=v[i+n1];
    }
    mergesortrev(a);
    mergesortrev(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main()
{
    int b[]={2,6,4,1,7,3,9,8,5};
    int n=sizeof(b)/sizeof(b[0]);
    vector<int> v(b,b+n);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesortrev(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}