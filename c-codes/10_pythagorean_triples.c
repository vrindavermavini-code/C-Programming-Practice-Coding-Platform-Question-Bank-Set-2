#include <stdio.h>

int main(void)
{
    int N;
    int a, b, c;
    int found = 0;

    scanf("%d", &N);

    for (a = 1; a <= N - 2; a++)
    {
        for (b = a + 1; b <= N - 1; b++)
        {
            for (c = b + 1; c <= N; c++)
            {
                if (a * a + b * b == c * c)
                {
                    printf("%d %d %d\n", a, b, c);
                    found = 1;
                }
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}
