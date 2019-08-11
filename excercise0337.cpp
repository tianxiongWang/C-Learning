#include <iostream>
using namespace std;
int main()
{
    const char c[] = {'h', 'e', 'l', 'l', 'o'};
    const char *p = c;
    cout << strlen(c) << endl;
    while (*p)
    {
        cout << *p << endl;
        p++;
    }
}