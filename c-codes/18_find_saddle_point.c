#include <stdio.h>

int main(void)
{
    int r, c;
    int matrix[100][100];
    int i, j, k;
    int found = 0;

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < r && !found; i++)
    {
        for (j = 0; j < c && !found; j++)
        {
            int rowMinimum = 1;
            int columnMaximum = 1;

            for (k = 0; k < c; k++)
            {
                if (matrix[i][k] < matrix[i][j])
                {
                    rowMinimum = 0;
                    break;
                }
            }

            if (rowMinimum)
            {
                for (k = 0; k < r; k++)
                {
                    if (matrix[k][j] > matrix[i][j])
                    {
                        columnMaximum = 0;
                        break;
                    }
                }
            }

            if (rowMinimum && columnMaximum)
            {
                printf("%d %d %d\n", i, j, matrix[i][j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("None\n");

    return 0;
}
