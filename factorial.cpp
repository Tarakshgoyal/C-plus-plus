#include <iostream>
using namespace std;
int main()
{
    int n, j = 1;
    cout << "enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i = i + 1)
    {
        j = j * i;
    }
    cout << j;
    return 0;
}