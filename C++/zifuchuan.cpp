#include <iostream>
using namespace std;
string print(string);
int main()
{
    string k = print("1234");
    for (char c : k)
        cout << c << endl;
    cout << sizeof(string) << endl;
    return 0;
}
string print(string s)
{
    cout << s << endl;
    return s;
}