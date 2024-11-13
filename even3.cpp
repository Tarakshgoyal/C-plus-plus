#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number ";
    cin >> num;
    if (num % 2 == 0 && num % 3 == 0)
    {
        cout << "valid number";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}