#include <iostream>
#include <cmath>
using namespace std;
int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}
int add(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    return sum;
}
float add(float num1, float num2)
{
    float sum = num1 + num2;
    return sum;
}
int main()
{
    float n, m, o;
    cin >> n;
    cin >> m;
    cin >> o;
    cout << add(n, m) << endl;
    cout << add(n, m, o) << endl;
    cout << pow(n, m) << endl;
    cout << sqrt(o) << endl;
    return 0;
}