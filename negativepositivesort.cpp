#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
    int i = 0, j = v.size();
    while (i <= j)
    {
        if (v[i] >= 0)
        {
            i++;
        }
        if (v[j] <= 0)
        {
            j--;
        }
        if (i >= j)
        {
            break;
        }
        if (v[i] < 0 && v[j] > 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
}
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        v.push_back(m);
    }
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}