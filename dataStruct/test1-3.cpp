//编写一个模板函数fill，给数组a[start,end-1]赋值value，并测试代码
#include <iostream>
using namespace std;
// template <typename T>
// void(T *a, n, value)
// {
//     for (int i = 0; i < n; ++i)
//     {

//     }
// }
int main()
{
    int a[10];
    int *p = a;
    p[1] = 2;
    cout << p[1] << endl;
    return 0;
}