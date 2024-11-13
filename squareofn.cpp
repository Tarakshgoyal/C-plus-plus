#include <iostream>
using namespace std;
int square(int x)
{
    return x * x;
}
void num(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " --> " << square(i) << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    num(n);
    return 0;
}