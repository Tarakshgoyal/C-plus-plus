#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m],arr1[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp=arr[i][j];
            arr[i][j]=arr1[j][i];
            arr1[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)
    {
        int temp=arr1[i][0];
        arr1[i][0]=arr1[i][n-1];
        arr1[i][n-1]=temp;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr1[n-i-1][m-j-1]<<" ";
        }
        cout<<endl;
    }
}