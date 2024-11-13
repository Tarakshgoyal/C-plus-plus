#include <iostream>
using namespace std;
int fact(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "enter n ";
    cin >> n;
    int r;
    cout << "enter r ";
    cin >> r;
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);
    cout << "combination of " << n << "and " << r << "is " << nfact / (rfact * nrfact) << endl;
    cout << "permutation of " << n << "and " << r << "is " << nfact / rfact;
    return 0;
}