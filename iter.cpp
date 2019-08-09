#include <iostream>
using namespace std;
int main()
{
    string s = "some words!";
    for (auto it = s.begin(); it != s.end(); it++)
    {
        *it = toupper(*it);
    }
    cout << s << endl;
}