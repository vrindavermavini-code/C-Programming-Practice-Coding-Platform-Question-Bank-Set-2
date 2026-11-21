#include <stdio.h>

int absoluteDifference(int a, int b)
{
    int difference = a - b;

    if (difference < 0)
        difference = -difference;

    return difference;
}

int main(void)
{
    int n;
    int a[1000];
    int i, j;
    int minDifference;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    minDifference = absoluteDifference(a[0], a[1]);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            int difference = absoluteDifference(a[i], a[j]);

            if (difference < minDifference)
                minDifference = difference;
        }
    }

    printf("%d\n", minDifference);

    return 0;
}
