#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i;
    }
    for (auto c : arr)
    {
        cout << c << " ";
    }
    cout << endl;
    return 0;
}