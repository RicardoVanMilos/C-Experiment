#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long l;
    int bin[32], tmp;
    while (getchar() != EOF)
    {
        scanf("%ld", &l);

        printf("%ld", l);
    }
    return 0;
}
