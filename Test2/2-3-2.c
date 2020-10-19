#include <stdio.h>

int main(void)
{
    char ch[BUFSIZ];
    while (scanf("%s", ch))
    {
        fputs(ch, stdout);
        putchar(' ');
    }
    return 0;
}