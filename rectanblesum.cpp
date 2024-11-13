#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int l1, r1, l2, r2, sum = 0;
    cin >> l1 >> r1 >> l2 >> r2;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }  
    cout << sum;
    return 0; 
} 