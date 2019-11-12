#include <iostream>
using namespace std;
int sum(int a, int b);
float sum(float a, float b, float c);
int main()
{
    int a = 10, b = 10, c = 10;
    cout << sum(a, b, c) << endl;
    return 0;
}
int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}