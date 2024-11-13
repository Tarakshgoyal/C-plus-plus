#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int arr[n], arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr2[count] = arr[i];
            count++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr2[count] = arr[i];
            count++;
        }
    }
    for (int count = 0; count < n; count++)
    {
        cout << arr2[count] << endl;
    }
    return 0;
}