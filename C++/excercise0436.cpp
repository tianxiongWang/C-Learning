#include <iostream>
using namespace std;
int main()
{
    int i = 5;
    double d = 7.5;
    double result1 = i * d;
    int result2 = i * int(d);
    cout << result1 << " " << result2 << endl;
    return 0;
}