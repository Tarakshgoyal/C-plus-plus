#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    cout << s<<endl;
    reverse(s.begin(),s.begin()+len/2);
    cout << s<<endl;
}