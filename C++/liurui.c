#include <stdio.h>
int main()
{
    int a;
    char b;
    printf("input a and b.a is in [0,4],b is in ['0','5']\n");
    scanf("%d %c", &a, &b);
    printf("%d,%c\n", a + b, a + b);
    return 0;
}