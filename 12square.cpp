#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1";
            }
            else
            {
                cout << "2";
            }
            // if (i % 2 == 0)
            // {
            //     if (j % 2 == 0)
            //     {
            //         cout << "1";
            //     }
            //     else
            //     {
            //         cout << "2";
            //     }
            // }
            // else
            // {
            //     if (j % 2 != 0)
            //     {
            //         cout << "1";
            //     }
            //     else
            //     {
            //         cout << "2";
            //     }
            // }
        }
        cout << endl;
    }
    return 0;
}