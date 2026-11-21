#include <stdio.h>

int main(void)
{
    int n, target;
    int a[1000];
    int i, j, count = 0;

    scanf("%d %d", &n, &target);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
