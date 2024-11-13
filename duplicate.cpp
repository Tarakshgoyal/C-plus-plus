#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<=n;i++)
    {
        cin>>arr[i];
    }
    // for(int i=0;i<=n;i++)
    // {
    //     for(int j=i+1;j<=n;j++)
    //     {
    //         if(arr[i]==arr[j])
    //         {
    //             cout<<arr[i];
    //             break;
    //         }
    //     }
    // }
    // int i=0,j=n;
    // while(i<j)
    // {
    //     if(arr[i]==arr[j])
    //     {
    //         cout<<arr[i];
    //         break;
    //     }
    //     else
    //     {
    //         i++;
    //         j--;
    //     }
    // }
    int sum=0;
    for(int i=0;i<n+1;i++)
    {
        sum+=arr[i];
    }
    int s=n*(n+1)/2;
    cout<<sum-s;
    return 0;
}