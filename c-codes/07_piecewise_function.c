#include <stdio.h>

int f(int x)
{
    if (x < 0)
        return x * x + 2 * x + 1;
    else if (x < 10)
        return 3 * x + 2;
    else
        return 5 * x - 7;
}

int main(void)
{
    int x;

    scanf("%d", &x);
    printf("%d\n", f(x));

    return 0;
}
