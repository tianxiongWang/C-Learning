#include <iostream>
int main()
{
    int a = 3;
    int *p = &a;
    int aa = sizeof *p;
    std::cout << aa << std::endl;
}