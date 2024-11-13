#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "how many number of digits you want to enter";
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}