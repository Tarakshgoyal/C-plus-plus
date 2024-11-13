#include <iostream>
using namespace std;
int main()
{
    int a, b, m = 1;
    cin >> a;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        m = m * a;
    }
    cout << m;
    return 0;
}