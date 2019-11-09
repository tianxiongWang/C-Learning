#include <iostream>
int factorial(int x);
int factorial(int x)
{
    int result = 1;
    while (x > 0)
    {
        result = result * x;
        --x;
    }

    std::cout << 123 << std::endl;
    return result;
}
