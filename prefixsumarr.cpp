#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int arr[n];
    arr[-1] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int a = arr[i - 1];
        arr[i] = arr[i] + arr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}