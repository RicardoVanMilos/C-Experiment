#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n, m;
    scanf("%d%d", &n, &m);
    /* int **mat = (int **)malloc((n + 1) * (m + 1)); */
    int mat[255][255];
    int matr[255][255];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            matr[m - j - 1][i] = mat[i][j];
        }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }
    return 0;
}