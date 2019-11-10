#include <iostream>
using namespace std;
int main()
{
    template <class T>
    T abc(T a, T b)
    {
        return a + b;
    }
    cout << abc(1, 2.0) << endl;
    return 0;
}