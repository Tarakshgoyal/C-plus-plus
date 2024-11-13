#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter age " << endl;
    cin >> age;
    if (age < 12)
    {
        cout << "child";
    }
    else if (age >= 12 && age <= 18)
    {
        cout << "teen";
    }
    else
    {
        cout << "adult";
    }
    return 0;
}