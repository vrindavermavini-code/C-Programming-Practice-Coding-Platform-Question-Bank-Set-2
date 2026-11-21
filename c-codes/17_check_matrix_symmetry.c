#include <stdio.h>

int main(void)
{
    int n;
    int matrix[100][100];
    int i, j;
    int symmetric = 1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < n && symmetric; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
