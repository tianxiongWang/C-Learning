#include <iostream>
using namespace std;
void swap(int &, int &);
int main()
{
    char a[]="wangxiong"
    cout << "before_change:"
         << "a=" << a << "   b=" << b << endl;
    swap(a, b);
    cout << "after_change:"
         << "a=" << a << "   b=" << b << endl;
    return 0;
}
void swap(int &p, int &q)
{
    int temp = p;
    p = q;
    q = temp;
}