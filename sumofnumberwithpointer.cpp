#include <iostream>
using namespace std;
int main()
{
    int x;
    int y;
    int *p1 = &x;
    int *p2 = &y;
    cin >> *p1 >> *p2;
    cout << x + y;
    return 0;
}