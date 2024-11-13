#include <iostream>
#include <vector>
using namespace std;
int maxonerow(vector<vector<int>> &V)
{
    int maxone = -1;
    int maxonerow = -1;
    int column = V[0].size();
    for (int i = 0; i < V.size(); i++)
    {
        for (int j = 0; j < V[i].size(); j++)
        {
            if (V[i][j] == 1)
            {
                int numberofones = column - j;
                if (numberofones > maxone)
                {
                    maxone = numberofones;
                    maxonerow = i;
                }
            }
        }
    }
    return maxonerow;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    int res = maxonerow(vec);
    cout << res << endl;
    return 0;
}