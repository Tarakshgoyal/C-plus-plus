#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(6);
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(9);
    cout<<v.capacity()<<endl;
    v.push_back(10);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    v.pop_back();
    v.at(2)=0;
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}