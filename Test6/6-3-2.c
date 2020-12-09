#include <stdio.h>
char *strcpy(char *, const char *);
void main(void)
{
    char a[20], b[60] = "there is a boat on the lake.";
    printf("%s\n", strcpy(a, b));
}
char *strcpy(char *t, const char *s)
{
    char *p = t;
    while ((*t++ = *s++) != '\0');
    return p;
}
