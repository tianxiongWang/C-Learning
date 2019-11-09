#include <iostream>
using namespace std;
int main()
{
    double i, j, result;
    try
    {
        cin >> i >> j;
        if (j == 0)
            throw invalid_argument("j can't be zero!");
        result = i / j;
        cout << result << endl;
    }
    catch (invalid_argument)
    {
        cout << "j can't be zero!" << endl;
        cin >> i >> j;
        if (j == 0)
            throw invalid_argument("j can't be zero!");
        result = i / j;
        cout << result << endl;
    }
    return 0;
}