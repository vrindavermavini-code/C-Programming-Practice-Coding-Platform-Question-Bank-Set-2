#include <stdio.h>

int isPerfectSquare(int n)
{
    int i;

    if (n < 0)
        return 0;

    for (i = 0; i <= n / (i + 1); i++)
    {
        if (i * i == n)
            return 1;
    }

    return 0;
}

int main(void)
{
    int n;

    scanf("%d", &n);
    printf("%d\n", isPerfectSquare(n));

    return 0;
}
