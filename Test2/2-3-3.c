#include <stdio.h>
#include <string.h>

int main(void)
{
    int a[10][10];
    memset(a, 0, sizeof(a));
    for (int i = 0; i <= 9; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
    }
    for (int i = 2; i <= 9; i++)
        for (int j = 1; j < i; j++)
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 8 - i; j++)
            printf("  ");
        for (int j = 0; j <= i; j++)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
    return 0;
}