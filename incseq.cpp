#include<iostream>
#include<vector>
using namespace std;
void incseq(int cur,int n,int k, vector<int>& ans)
{
    if(ans.size()==k)
    {
        for(int i=0;i<k;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=cur+1;i<=n;i++)
    {
        ans.push_back(i);
        incseq(i,n,k,ans);
        ans.pop_back();
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    incseq(0,n,k,v);
}