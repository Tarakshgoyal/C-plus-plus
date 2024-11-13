#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int reversepart(int i, int j, vector<int> &v)
{
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
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
    display(v);
    int x;
    cin >> x;
    x = x % n;
    reversepart(0, x, v);
    display(v);
    return 0;
}