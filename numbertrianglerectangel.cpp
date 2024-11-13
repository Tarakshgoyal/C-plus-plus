#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << n-j+1 ;
        }
        for(int k=1;k<n-i+1;k++)
        {
            cout<< k ;
        }
        cout << endl;
    }
    return 0;
}