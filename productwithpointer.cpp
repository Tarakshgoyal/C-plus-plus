#include<iostream>
using namespace std;
void product (int *x,int *y,int *z)
{
    (*z)=(*x)*(*y);
    return ;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int ans;
    product(&n,&m,&ans);
    cout<<ans;
    return 0;
}