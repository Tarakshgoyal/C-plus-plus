#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    int count = 0, j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            arr[j] = 0;
            j++;
            count++;
        }
    }
    for (int j = count; j < n; j++)
    {
        arr[j] = 1;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
    }
    return 0;
} 