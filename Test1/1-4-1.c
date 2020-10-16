#include <stdio.h>
#include <string.h>

char encrypt(char c);
int x[8];

int main()
{
    char tmp;
    scanf("%c", &tmp);
    while (tmp != EOF)
    {
        printf("%c", encrypt(tmp));
        scanf("%c", &tmp);
    }
}

char encrypt(char c)
{
    int inte = (int)c;
    memset(x, 0, sizeof(x));

    x[7] = inte / 128;
    x[6] = inte % 128 / 64;
    x[5] = inte % 128 % 64 / 32;
    x[4] = inte % 128 % 64 % 32 / 16;
    x[3] = inte % 128 % 64 % 32 % 16 / 8;
    x[2] = inte % 128 % 64 % 32 % 16 % 8 / 4;
    x[1] = inte % 128 % 64 % 32 % 16 % 8 % 4 / 2;
    x[0] = inte % 2;

    int temp;

    temp = x[0];
    x[0] = x[1];
    x[1] = temp;

    temp = x[2];
    x[2] = x[3];
    x[3] = temp;

    temp = x[4];
    x[4] = x[5];
    x[5] = temp;

    int num = x[6] + 2 * x[7];

    for (int cou = 0; cou < num; cou++)
    {
        int temp = x[5];
        x[5] = x[4];
        x[4] = x[3];
        x[3] = x[2];
        x[2] = x[1];
        x[1] = x[0];
        x[0] = temp;
    }

    char ret = (char)(x[0] + x[1] * 2 + x[2] * 4 + x[3] * 8 + x[4] * 16 + x[5] * 32 + x[6] * 64 + x[7] * 128);
    return ret;
}
