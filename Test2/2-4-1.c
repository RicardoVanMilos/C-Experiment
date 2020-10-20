#include <stdio.h>

int main(void)
{
    char a[BUFSIZ], b;
    int num;
    gets(a);
    if (sscanf(a, "%i%c", &num, &b) == 1)
        printf("Valid.");
    else
        printf("Invalid.");
    return 0;
}