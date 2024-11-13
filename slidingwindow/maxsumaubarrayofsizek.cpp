#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k=3;
    int maxsum=INT_MIN;
    int maxIdx=-1;
    int prevsum=0;
    // for(int i=0;i<=n-k;i++)
    // {
    //     int sum=0;
    //     for(int j=i;j<i+k;j++)
    //     {
    //         sum+=arr[j];
    //     }
    //     if(maxsum<sum)
    //     {
    //         maxsum=sum;
    //         maxIdx=i;
    //     }
    // }
    for(int i=0;i<k;i++)
    {
        prevsum += arr[i];
    }
    maxsum=prevsum;
    int i=1;
    int j=k;
    while(j<n)
    {
        int currsum=prevsum + arr[j] - arr[i-1];
        if(maxsum<currsum)
        {
            maxsum=currsum;
            maxIdx=i;
        }
        prevsum=currsum;
        i++;
        j++;
    }
    cout<<maxsum<<endl;
    cout<<maxIdx;
}