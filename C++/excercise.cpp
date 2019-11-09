#include <iostream>
using namespace std;
int main()
{
    char words[] = "hello world!";
    cout << *(words + 11) << endl;
    return 0;
}