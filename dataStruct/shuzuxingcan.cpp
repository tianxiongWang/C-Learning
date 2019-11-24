#include <iostream>
#include <vector>
using namespace std;
void showList(int *a, int);
int main()
{
    int L[3] = {1, 2, 3};
    showList(L, 3);
    return 0;
}
void showList(int *a, int b)
{
    for (int i = 0; i < b; ++i)
        cout << a[i] << endl;
}