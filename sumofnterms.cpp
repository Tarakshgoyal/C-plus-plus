#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    // int i = 1;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << sum;
    return 0;
}