#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    return;
}
int main()
{
    int n, m;
    cin >> n >> m;
    swap(&n, &m);
    cout<<n<<" "<<m;
    return 0;
}