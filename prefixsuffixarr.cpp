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
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0, b = 0;
        for (int j = 0; j < i; j++)
        {
            b = b + arr[j];
        }
        for (int j = i; j < n; j++)
        {
            c = c + arr[j];
        }
        if (b == c)
        {
            cout << "array have a pair of prefix = suffix";
        }
        else
        {
            cout << "nope";
        }
    }
    return 0;
}