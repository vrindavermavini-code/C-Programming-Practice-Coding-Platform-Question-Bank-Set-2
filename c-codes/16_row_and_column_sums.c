#include <stdio.h>

int main(void)
{
    int r, c;
    int matrix[100][100];
    int i, j;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (i = 0; i < r; i++)
    {
        int rowSum = 0;

        for (j = 0; j < c; j++)
            rowSum += matrix[i][j];

        printf("%d", rowSum);

        if (i < r - 1)
            printf(" ");
    }

    printf("\n");

    for (j = 0; j < c; j++)
    {
        int columnSum = 0;

        for (i = 0; i < r; i++)
            columnSum += matrix[i][j];

        printf("%d", columnSum);

        if (j < c - 1)
            printf(" ");
    }

    printf("\n");

    return 0;
}
