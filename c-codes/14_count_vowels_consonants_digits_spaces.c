#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char line[1000];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    int i;

    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; i++)
    {
        unsigned char ch = (unsigned char)line[i];

        if (isalpha(ch))
        {
            ch = (unsigned char)tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else if (isdigit(ch))
        {
            digits++;
        }
        else if (ch == ' ')
        {
            spaces++;
        }
    }

    printf("%d %d %d %d\n", vowels, consonants, digits, spaces);

    return 0;
}
