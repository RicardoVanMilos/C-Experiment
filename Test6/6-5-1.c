#include <stdio.h>
int main(int argc, char **argv)
{
    char x[31], y[31];
    int a[31], b[31], c[31];

    scanf("%s", x);

    for (int i = 20; i < 30; i++)
    {
        x[i] = x[i+1];
    }
    
    for (int i = 0; i < 30; i++)
    {
        a[i] = x[i] - 48;
    }

    printf("+\n");

    scanf("%s", y);

    for (int i = 20; i < 30; i++)
    {
        y[i] = y[i+1];
    }

    for (int i = 0; i < 30; i++)
    {
        b[i] = y[i] - 48;
    }

    printf("=\n");
    for (int i = 0; i < 30; i++)
        c[i] = a[i] + b[i];

    for (int i = 29; i >= 0; i--)
        if (c[i] > 9)
        {
            c[i] -= 10;
            c[i - 1]++;
        }

    for (int i = 0; i < 20; i++)
    {
        printf("%d", c[i]);
    }

    printf(".");

    for (int i = 20; i < 30; i++)
    {
        printf("%d", c[i]);
    }
    
    printf("\n");
}