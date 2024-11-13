#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, m;
    cout << "enter a number ";
    cin >> n;
    while (n != 0)
    {
        m = n % 10;
        if (m % 2 == 0 && m != 0)
        {
            sum = sum - m;
        }
        else
        {
            sum = sum + m;
        }
        n = n / 10;
    }
    cout<<sum;
    return 0;
}