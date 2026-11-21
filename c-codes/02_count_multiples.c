#include <stdio.h>

int countMultiples(int n, int k)
{
    return n / k;
}

int main(void)
{
    int n, k;

    scanf("%d %d", &n, &k);
    printf("%d\n", countMultiples(n, k));

    return 0;
}
