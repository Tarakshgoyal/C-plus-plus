#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }
    int minr = 0, maxr = n - 1, minc = 0, maxc = m - 1, count = 1;
    while (minr <= maxr && minc <= maxc)
    {
        for (int i = minc; i <= maxc; i++)
        {
            arr[minr][i] = count;
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr; i++)
        {
            arr[i][maxc] = count;
            count++;
        }
        maxc--;
        for (int i = maxc; i >= minc; i--)
        {
            arr[maxr][i] = count;
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr; i--)
        {
            arr[i][minc] = count;
            count++;
        }
        minc++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}  