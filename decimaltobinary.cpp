#include <iostream>
using namespace std;
int main()
{
    int n, o = 1, p = 0;
    cout << "enter a number ";
    cin >> n;
    while (n > 0)
    {
        int m = n % 10;
        p = p + m * o;
        o *= 2;
        n = n / 10;
    }
    cout << p;
    return 0;
}