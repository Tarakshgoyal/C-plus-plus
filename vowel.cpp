#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "enter a letter ";
    cin >> letter;
    switch (letter)
    {
    case 'a':
        cout << "vowel" << endl;
        break;
    case 'e':
        cout << "vowel" << endl;
        break;
    case 'i':
        cout << "vowel" << endl;
        break;
    case 'o':
        cout << "vowel" << endl;
        break;
    case 'u':
        cout << "vowel" << endl;
    default:
        cout << "Consonent";
    }
    return 0;
}