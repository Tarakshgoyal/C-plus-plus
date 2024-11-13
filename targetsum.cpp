#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter array value ";
        cin >> arr[i];
    }
    cout << "enter a number for number of target sum";
    int m, count = 0;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == m)
            {
                count = count + 1;
            }
        }
    }
    cout << count;
    return 0;
}