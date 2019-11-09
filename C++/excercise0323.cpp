#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> T(10, 100);
    for (auto i = T.begin(); i != T.end(); i++)
    {
        *i = 2 * *i;
    }
    for (auto j = T.begin(); j != T.end(); j++)
    {
        cout << *j << " ";
    }
}