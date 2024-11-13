#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int f=1;
        for(int j=n-i;j>0;j--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout<<f<<" ";
            f=f*(i-j)/(j+1);
        }
        cout << endl;
    }
    return 0;
}