#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(6);
    bool sortedflag = true;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] <= v[i - 1])
        {
            sortedflag = false;
        }
    }
    if (sortedflag == 1)
    {
        cout << "the given array is sorted ";
    }
    else
    {
        cout << "the given array is not sorted ";
    }
    return 0;
}