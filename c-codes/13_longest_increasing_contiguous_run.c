#include <stdio.h>

int main(void)
{
    int n;
    int a[1000];
    int i;
    int currentLength = 1;
    int bestLength = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            currentLength++;
        else
            currentLength = 1;

        if (currentLength > bestLength)
            bestLength = currentLength;
    }

    printf("%d\n", bestLength);

    return 0;
}
