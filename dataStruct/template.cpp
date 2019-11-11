#include <iostream>
using namespace std;

template <typename T>
T abc(T a, T b)
{
    return a + b;
}
int main()
{
    cout << abc(1.0, 2.0) << endl;
    return 0;
}