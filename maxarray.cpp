#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "max number out of all in given array is " << max;
    return 0;
}