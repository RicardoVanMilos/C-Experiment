#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *strcomp(const char *str1, const char *str2)
{
    while (*str1 == *str2)
    {
        if (*str1 == '\0')
            return 0;
        str1++;
        str2++;
    }
    if (!(*str1 - *str2))
        return "Bigger";
        else return "Smaller";
}

char *strstrg(const char *s1, const char *s2)
{
    int len2;
    if (!(len2 = strlen(s2)))
        return (char *)s1;
    for (; *s1; ++s1)
    {
        if (*s1 == *s2 && strncmp(s1, s2, len2) == 0)
            return (char *)s1;
        return NULL;
    }
}

int main()
{

    char *(*p[2])(const char *, const char *);
    int n;
    char a[81], b[81];
    p[0] = strcomp;
    p[1] = strstrg;
    printf("Input a:");
    scanf("%s",a);
    printf("Input b:");
    scanf("%s",b);
    printf("Input Option:");
    scanf("%d", &n);
    printf("%s\n", p[n](a, b));
}