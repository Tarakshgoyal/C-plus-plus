#include <iostream>
using namespace std;
float circle(int r)
{
    return 3.14 * r * r;
}
int main()
{
    int n;
    cout << "enter radius ";
    cin >> n;
    cout << "the area of radius " << n << " is " << circle(n);
    return 0;
}