#include <stdio.h>

int digitSum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main(void)
{
    int n;
    int a[1000];
    int i, j, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (digitSum(a[i]) == digitSum(a[j]))
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
