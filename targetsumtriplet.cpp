#include <iostream>
using namespace std;
int main()
{
    int n, m, count = 0;
    cout << "enter a number ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "enter a number for target sum ";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == m)
                {
                    count = count + 1;
                }
            }
        }
    }
    cout << count;
    return 0;
}