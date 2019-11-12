//编写一个模板函数count，返回值是数组a[0,n-1]中，value出现的次数，并打印在屏幕
#include <iostream>
using namespace std;
template <typename T>
int count(T (&a)[10], T b)
{
    int c;
    for (auto it = a.begin(); it != a.end(); it++)
    {
        if (*it == b)
            ++c;
    }
    return c;
}
int main()
{
    int a[10] = {1, 2, 2, 2, 2, 3, 3, 4, 5, 6};
    int b = 2;
    cout << count(a, b) << endl;
    return 0;
}