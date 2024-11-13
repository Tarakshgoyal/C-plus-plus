#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    vector<int> v;
    vector<int> v2;
    int n,m;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>m;
        v.push_back(m);
    }
    display(v);
    for (int i = 0; i < v.size(); i++)
    {
        v2.push_back(v[n-i-1]);
    }
    display(v2);
    return 0;
}