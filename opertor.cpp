#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << num1 + num2 << endl;
    cout << num1 - num2 << endl;
    cout << num1 * num2 << endl;
    cout << num1 / num2 << endl;
    cout << num1 % num2 << endl;
    cout << (num1 == num2) << endl;
    cout << (num1 != num2) << endl;
    cout << (num1 >= num2) << endl;
    cout << (num1 <= num2) << endl;
    num1 += 3;
    cout << num1 << endl;
    num2 -= 2;
    cout << num2 << endl;
    int a = 5;
    int b = 8;
    cout << (a & b) << endl;
    cout << (a << 1) << endl;
    cout << (a >> 1) << endl;
    cout << (a | b) << endl;
    return 0;
}