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
    int m, o, p;
    cout << "enter a number to search";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == m)
        {
            o = arr[i];
            p = i;
            break;
        }
        else
        {
            o = -1;
        }
    }
    cout << o << "location is " << p;
    return 0;
}