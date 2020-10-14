#include <stdio.h>

int main(void)
{
    char c;
    c = getchar();
    while (c != EOF)
    {
        if ((c >= 'A') && (c <= 'Z'))
            putchar(c + 32);
        else
            putchar(c);
        c = getchar();
    }
    return 0;
}