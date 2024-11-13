#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partition(int arr[],int si,int ei)
{
    int pivot=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=pivot)
        {
            count++;
        }
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx && j>pivotidx)
    {
        if(arr[i]<=pivot)
        {
            i++;
        }
        if(arr[j]>pivot)
        {
            j--;
        }
        else if(arr[i]>pivot && arr[j]<=pivot)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotidx;
}
int kthsmallest(int arr[],int si,int ei,int k)
{
    int pi=partition(arr,si,ei);
    if(pi+1==k)
    {
        return arr[pi];
    }
    else if(pi+1<k)
    {
        return kthsmallest(arr,pi+1,ei,k);
    }
    else    return kthsmallest(arr, si, pi-1, k);

}
int main()
{
    int arr[]={5,1,8,2,7,6,3,10,4,-4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);
}