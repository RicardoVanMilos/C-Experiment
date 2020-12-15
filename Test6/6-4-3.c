#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **mtx;

void fuck_tab(char *);

int main(int argc, char **argv)
{
    char p[255][80];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char temp[80];
        gets(temp);
        fuck_tab(temp);
        for (int j = 0; j < strlen(temp); j++)
            p[i][j] = temp[j];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
}

void fuck_tab(char *str)
{
    int i = 0;
    while (str[i] == ' ')
    {
        {
            for (int j = 0; j < strlen(str) - 1; j++)
                str[j] = str[j + 1];
            str[strlen(str) - 1] = '\0';
        }
        i++;
    }
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '\t')
        {
            for (int j = i; j < strlen(str) - 1; j++)
                str[j] = str[j + 1];
            str[strlen(str) - 1] = '\0';
        }
    }
}