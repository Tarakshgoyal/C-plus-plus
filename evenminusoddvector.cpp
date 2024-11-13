#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    int even = 0, odd = 0;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
        {
            even = even + v[i];
        }
        else
        {
            odd = odd + v[i];
        }
    }
    cout << even - odd;
    return 0;
}