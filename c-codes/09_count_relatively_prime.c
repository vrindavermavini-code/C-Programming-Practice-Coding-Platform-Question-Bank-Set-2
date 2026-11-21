#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main(void)
{
    int m, n;
    int x, count = 0;

    scanf("%d %d", &m, &n);

    for (x = 1; x <= m; x++)
    {
        if (gcd(x, n) == 1)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
