#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[1000];
    int i, count;

    scanf("%999s", str);

    for (i = 0; str[i] != '\0'; i += count)
    {
        count = 1;

        while (str[i + count] != '\0' &&
               str[i + count] == str[i])
        {
            count++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}
