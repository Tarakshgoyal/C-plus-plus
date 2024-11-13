#include <iostream>
using namespace std;
int main()
{
    int n, m = 0;
    cout << "enter a number ";
    cin >> n;
    while (n != 0)
    {
        m = m * 10;
        m = m + (n % 10);
        n = n / 10;
    }
    cout << m;
    return 0;
}