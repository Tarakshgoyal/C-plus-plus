#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter number of rows";
    cin >> n;
    cout << "enter number of columns";
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                cout << " * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout << endl;
    }
    return 0;
}