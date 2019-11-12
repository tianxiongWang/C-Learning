#include <iostream>
using namespace std;

template <typename T>
T abc(T &a, T &b, T &c)
{
    a = a * 100;
    return a + b + c;
}
int main()
{
    int a = 10, b = 10, c = 10;
    cout << abc(a, b, c) << endl;
    cout << a << endl;
    return 0;
}