#include <iostream>
using namespace std;
int largestelement(int arr[], int size)
{
    int max = arr[0];
    int maxindex = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
        else
        {
            continue;
        }
    }
    return maxindex;
}
int main()
{
    int n;
    cout << "enter a number ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int indexoflargest = largestelement(arr, n);
    arr[indexoflargest] = -1;
    int indexofsecondlargest = largestelement(arr, n);
    cout << arr[indexofsecondlargest] << endl;
    return 0;
}