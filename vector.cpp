#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> T;
    int x;
    while (cin >> x)
    {
        T.push_back(x);
    }
    for (auto c : T)
    {
        cout << c << endl;
    }
}