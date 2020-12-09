#include <stdio.h>
#include <string.h>

void strnins(char *, char *, int);

int main(void)
{
    char s[255], t[255];
    int n;
    scanf("%s", s);
    scanf("%s", t);
    scanf("%d", &n);
    strnins(s, t, n);
    for (int i = 0; i <= strlen(s) + strlen(t); i++)
        printf("%c", s[i]);
    return 0;
}

void strnins(char *s, char *t, int n)
{
    n--;
    for (int i = strlen(s) + strlen(t); i >= strlen(t) + n; i--)
    {
        s[i] = s[i - (strlen(t))];
    } //move the array
    for (int i = n + 1; i <= strlen(t) + n; i++)
    {
        s[i] = t[i - n - 1];
    } //insert the new array into the target array
}